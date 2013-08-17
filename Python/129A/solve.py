import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
n = int(my_file.readline())
a = [int(i) for i in my_file.readline().split()]
res = 0
for i in range(n):
    temp = a[i]
    a[i] = 0
    if sum(a) % 2 == 0:
        res += 1
    a[i] = temp
print(res)