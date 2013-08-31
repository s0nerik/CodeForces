import sys
f = sys.stdin
#f = open("input.txt", "r")
a = list(f.readline().strip())
prev = [a[0]]
for i in a[1:]:
    if prev and i == prev[-1]:
        prev.pop()
    else:
        prev.append(i)
print(*prev, sep="")