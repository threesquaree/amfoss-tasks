
num = int(input())
factors = []
i=0
for j in range(1, num + 1):
    if num % j == 0:
        i+=1
        factors.append(i)
        shelf_ways = len(factors)
    
print(shelf_ways)