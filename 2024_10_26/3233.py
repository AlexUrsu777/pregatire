n = int(input())
n <<= 1

if n&1 == 0:
    n -= 1

while n > 0:
    print(n, end='')
    n -= 2
    
