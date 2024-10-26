import math

n = int(input())
s = 0
for i in range(1,n+1):
    x = int(input())
    s+=1/x
m = n/s
print('{:.2f}'.format(math.floor(m*100)/100))