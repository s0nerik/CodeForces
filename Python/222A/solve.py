import sys
f = sys.stdin
#f = open("input.txt", "r")
n, k = map(int, f.readline().strip().split())
k -= 1
a = list(map(int, f.readline().strip().split()))
c = k
for i in range(k,-1,-1):
    if a[i] != a[k]:
        c = i+1
        break
if a.count(a[0]) == len(a):
    print(0)
elif sum(a[k:])/len(a[k:]) == a[k]:
    print(len(a[:c]))
else:
    print(-1)