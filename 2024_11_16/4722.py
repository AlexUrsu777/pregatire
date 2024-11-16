n = int(input())
x = n
while n>9:
    n = n//10
s = 0
while x>9:
    c = x%10
    s = s+c
    x = x//10
    # print('s: ',s)
    # print('n: ',n)
    # print('x: ',x)
if s==n:
    print("da")
else:
    print("nu")