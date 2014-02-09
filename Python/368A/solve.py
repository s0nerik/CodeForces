import sys

f = sys.stdin
# f = open("input.txt", "r")

n, d = map(int, f.readline().split())
a = [int(i) for i in f.readline().split()]
a.sort()
m = int(f.readline())

profit = 0

for i in range(m):
    if a:
        profit += a[0]
        del a[0]
    else:
        profit -= d

print(profit)