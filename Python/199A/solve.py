import sys
#f = sys.stdin
#f = open("input.txt", "r")
n = int(input())
if n == 1:
    print(1,0,0)
    exit(0)
elif n == 0:
    print(0,0,0)
    exit(0)
p = 0
pp = 1
i = 1
while i < n:
    t = i
    p = pp
    pp = t
    i = pp+p
print(p, pp, 0)