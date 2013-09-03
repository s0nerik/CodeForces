import sys
f = sys.stdin
# f = open("input.txt", "r")
n, m = map(int, f.readline().strip().split())
a = [int(i) for i in f.readline().strip().split()]
a.sort()
def mn():
    mn = 0
    global a
    i, b = 0, 0
    l = len(a)
    while b < n:
        if i < l:
            if a[i] >= 1:
                mn += a[i]
                a[i] -= 1
                b += 1
            else:
                i += 1
    return mn
def mx():
    mx = 0
    global a, n
    aa = a[::-1]
    i, b = 0, 0
    l = len(a)
    while True:
        start = aa.index(aa[i])
        end = len(aa) - aa[::-1].index(aa[i]) - 1
        for i in range(start, end+1):
            if b < n:
                mx += aa[i]
                aa[i] -= 1
                b += 1
            else:
                return mx
print(sum(range(a[0], a[0]-n, -1)), sum(range(a[0], a[0]-n, -1))) if m==1 else print(mx(), mn())