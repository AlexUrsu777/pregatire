n = int(input())
m = int(input())
print('{',end='')
for a in range(1,n+1):
    for b in range(1,m+1):
        print('(',a,',',b,')',sep='',end='')
        if not(a==n and b==m): 
            print(',',end='')
print('}')
