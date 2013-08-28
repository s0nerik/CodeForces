import sys
f = sys.stdin
#f = open("input.txt", "r")
n = int(f.readline())
t = [int(i) for i in f.readline().strip().split()]
N = 10**6 + 1
k = [True] * N
a = set()
for i in range(2, N):
    if k[i]:
        a.add(i**2)
        for j in range(i, N, i):
            k[j] = False

for i in t:
    if i in a:
        print("YES")
    else:
        print("NO")