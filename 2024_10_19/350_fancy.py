n = int(input())
m = int(input())
print('{',end='')
print(','.join([f'({a},{b})' for a in range(1,n+1) for b in range(1,m+1)]),end='')
print('}')
