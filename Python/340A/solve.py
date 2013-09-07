import sys
from fractions import gcd
f = sys.stdin
# f = open("input.txt", "r")
x, y, a, b = map(int, f.readline().strip().split())
def lcm(x, y):
    return x * y // gcd(x, y)
l = lcm(x, y)
print(b//l - (a-1)//l)