package main

import (
	"encoding/csv"
	"log"
	"os"

	"github.com/PuerkitoBio/goquery"
	"github.com/geziyor/geziyor"
	"github.com/geziyor/geziyor/client"
	"github.com/geziyor/geziyor/export"
)

func main() {

	geziyor.NewGeziyor(&geziyor.Options{
		StartRequestsFunc: func(g *geziyor.Geziyor) {
			g.GetRendered("https://www.forbes.com/real-time-billionaires/", g.Opt.ParseFunc)
		},
		ParseFunc: func(g *geziyor.Geziyor, r *client.Response) {
			ranks := []string{}
			names := []string{}
			ages := []string{}
			countries := []string{}
			netWorths := []string{}
			sources := []string{}

			r.HTMLDoc.Find("tr.base.ng-scope").EachWithBreak(func(i int, s *goquery.Selection) bool {
				ranks = append(ranks, s.Find("td.rank").Text())
				names = append(names, s.Find("td.name").Text())
				ages = append(ages, s.Find("td.age").Text())
				countries = append(countries, s.Find("td.Country\\/Territory").Text())
				netWorths = append(netWorths, s.Find("td.Net.Worth").Text())
				sources = append(sources, s.Find("td.source").Text())

				if i == 9 {
					return false
				}
				return true
			})

			data := make([]map[string]string, len(ranks))
			for i := range data {
				data[i] = make(map[string]string)
				data[i]["Rank"] = ranks[i]
				data[i]["Name"] = names[i]
				data[i]["Age"] = ages[i]
				data[i]["Country"] = countries[i]
				data[i]["Net-Worth"] = netWorths[i]
				data[i]["Source"] = sources[i]
			}

			f, err := os.Create("out.csv")
			if err != nil {
				log.Fatal(err)
			}
			defer f.Close()

			w := csv.NewWriter(f)
			headers := []string{"Rank", "Name", "Age", "Country", "Net-Worth", "Source"}
			if err := w.Write(headers); err != nil {
				log.Fatal(err)
			}
			for _, d := range data {
				row := []string{d["Rank"], d["Name"], d["Age"], d["Country"], d["Net-Worth"], d["Source"]}
				if err := w.Write(row); err != nil {
					log.Fatal(err)
				}
			}
			w.Flush()
		},
		Exporters: []export.Exporter{&export.CSV{}},
		//BrowserEndpoint: "ws://localhost:3000",
	}).Start()

}
