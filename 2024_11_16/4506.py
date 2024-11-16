n = int(input())
while n>9:
    s = 0
    while n!=0:
        c = n%10
        n = n//10
        s = s+c
    n = s

print(n)