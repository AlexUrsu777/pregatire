n = int(input())
s = 0
for d in range (1,n+1):
    if n%d==0:
        s = s+d
print(s)