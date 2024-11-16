n = int(input())
k = int(input())
p = 1
while n!=0:
    c=n%10
    if c!=k:
        p=p*c
    n=n//10
print(p)