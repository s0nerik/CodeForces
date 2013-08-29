import sys
f = sys.stdin
#f = open("input.txt", "r")
n = int(f.readline().strip())
u = int(f.readline().strip())
a, b = [], []
for i in f:
    a.append(int(i.split()[0]))
    b.append(int(i.split()[1]))
c = [[1, 2, 3, 4, 5, 6] for i in range(n)]
for i in range(n):
    c[i].remove(a[i])
    c[i].remove(b[i])
    c[i].remove(7-a[i])
    c[i].remove(7-b[i])
for i in range(n-1):
    if c[i] != c[i+1]:
        print("NO")
        break
else:
    print("YES")