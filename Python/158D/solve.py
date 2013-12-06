import sys

f = sys.stdin
#f = open("input.txt", "r")

n = int(f.readline())
a = [int(i) for i in f.readline().strip().split(" ")]

max_interval = n//3

maxSum = -sys.maxsize

for i in range(1, max_interval+1):
    if n % i == 0:
        for t in range(i):
            s = sum(a[t::i])
            if sum(a[t::i]) > maxSum:
                maxSum = s
print(maxSum)