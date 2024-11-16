def suma_cifrelor(n):
    s = 0
    while n!=0:
        c = n%10
        n = n//10
        s = s+c
    return s


n = int(input())
while n>9:
    n = suma_cifrelor(n)

print(n)