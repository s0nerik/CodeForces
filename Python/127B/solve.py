import sys
f = sys.stdin
#f = open("input.txt", "r")
n = int(f.readline().strip())
a = [int(i) for i in f.readline().strip().split()]
a.sort()
k = list(set(a))
counts = []
for i in k:
    counts.append(a.count(i))
counts.sort(reverse=True)
cnt = 0
i = 0
while i < len(counts):
    if counts[i] >= 4:
        cnt += counts[i]//4
        counts[i] -= (counts[i]//4)*4
    i += 1
while 0 in counts:
    counts.remove(0)
counts.sort(reverse=True)
i = 0
while i < len(counts)-1:
    if counts[i] >= 2 and counts[i+1] >= 2:
        cnt += min(counts[i], counts[i+1])//2
        i += 2
    else:
        i += 1
print(cnt)