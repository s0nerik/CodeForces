import sys
f = sys.stdin
#f = open("input.txt", "r")
n, k = map(int, f.readline().strip().split())
k -= 1
p, t = [], []
for line in f:
    p.append(int(line.strip().split()[0]))
    t.append(int(line.strip().split()[1]))
for z in range(n):
    for i in range(n-1):
        if p[i] < p[i+1] or (p[i] == p[i+1] and t[i] > t[i+1]):
            p[i], p[i+1] = p[i+1], p[i]
            t[i], t[i+1] = t[i+1], t[i]
count = 0
for i in range(n):
    if p[i] == p[k] and t[i] == t[k]:
        count += 1
print(count)