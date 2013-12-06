import sys

f = sys.stdin
#f = open("input.txt", "r")

a = f.read().strip().split("\n")[1:]

l = len(a)
i = 1
cnt = 1
while i < l:
    if a[i-1] != a[i]:
        cnt += 1
    i += 1

print(cnt)