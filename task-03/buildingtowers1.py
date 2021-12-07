rodno = int(input())
rodweight = input().split()
for j in range(0,rodno):
    rodweight[j] = int(rodweight[j])
    
freq_rodweight = []
distinct_list = list(set(rodweight))
towers_num = len(distinct_list)

for i in distinct_list:
    freq_rodweight.append(rodweight.count(i))
    tallest_h = max(freq_rodweight)

print(tallest_h, towers_num)
