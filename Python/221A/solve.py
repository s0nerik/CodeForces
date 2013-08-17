import sys
#my_file = sys.stdin
#my_file = open("input.txt", "r")
n = int(input())
res = list(range(1, n))
res.insert(0, n)
print(" ".join(map(str, res)))