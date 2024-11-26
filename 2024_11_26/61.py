a = int(input())
b = int(input())
if a < b:
    min = b
    if a<b:
        min = a
for i in range (1,min+1):
    if a%i==0 and b%i==0:
        print(i,end=" ")
print()