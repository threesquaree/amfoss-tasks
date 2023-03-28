package main

import (
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
			r.HTMLDoc.Find("tr.base.ng-scope").EachWithBreak(func(i int, s *goquery.Selection) bool {
				g.Exports <- map[string]interface{}{
					"Name":      s.Find("td.name").Text(),
					"Age":       s.Find("td.age").Text(),
					"Country":   s.Find("td.Country\\/Territory").Text(),
					"Net-Worth": s.Find("td.Net.Worth").Text(),
					"Source":    s.Find("td.source").Text(),
				}
				if i == 9 {
					return false
				}
				return true
			})
		},
		Exporters: []export.Exporter{&export.CSV{}},
		//BrowserEndpoint: "ws://localhost:3000",
	}).Start()

}
