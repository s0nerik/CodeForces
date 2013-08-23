import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
n = int(my_file.readline())
a = [int(i) for i in my_file.readline().strip().split()]
even = 0
odd = 0
for i in range(n):
    if a[i]%2 == 0:
        even += 1
        if even == 2:
            break
if even == 2:
    for i in range(n):
        if a[i]%2 != 0:
            print(i+1)
            break
else:
    for i in range(n):
        if a[i]%2 == 0:
            print(i+1)
            break