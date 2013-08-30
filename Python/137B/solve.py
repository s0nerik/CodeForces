import sys
f = sys.stdin
#f = open("input.txt", "r")
n = int(f.readline().strip())
a = [int(i) for i in f.readline().strip().split()]
a1 = set(i for i in a if i<=n)
print(n - len(a1))