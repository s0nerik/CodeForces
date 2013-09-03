import sys
# f = sys.stdin
# f = open("input.txt", "r")
n = int(input())
a = []
for i in range(n):
    a.append(input())
g = list(set(a))
try:
    if a.count(g[0]) > a.count(g[1]):
        print(g[0])
    else:
        print(g[1])
except:
    print(g[0])