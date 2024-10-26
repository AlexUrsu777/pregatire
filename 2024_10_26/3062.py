x = int(input())
t = int(input())
y = int(input())
i = 0
while not(x<=y):
    i = i+t
    x = x-1/4*x
print(i)