n = int(input())
min = n

for d in range (2,n):
    if n%d==0 and d<min:
        min = d
p = min*min
print(p)