n =  int(input())
x = n
while x>=100:
    x = x//10
x = x%10
k = 0
while n!=0:
    c = n%10
    if (c>x):
        k = k+1
    n = n//10
print(k)