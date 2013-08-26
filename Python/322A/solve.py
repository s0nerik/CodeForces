import sys
f = sys.stdin
#f = open("input.txt", "r")
m, l = map(int, f.readline().split())
print(m+l-1)
for i in range(1, l+1):
    print(1, i)
for i in range(2, m+1):
    print(i, 1)