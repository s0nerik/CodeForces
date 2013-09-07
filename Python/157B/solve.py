import sys
from math import pi
f = sys.stdin
# f = open("input.txt", "r")
n = int(f.readline())
r = [int(i) for i in f.readline().strip().split()]
r.sort()
r.insert(0, 0)
res = 0
for i in range(-1, -len(r), -2):
    res += r[i]**2 - r[i-1]**2
print(res*pi)