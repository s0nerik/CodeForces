import sys
f = sys.stdin
#f = open("input.txt", "r")
f.readline()
d = [int(i) for i in f.readline().strip().split()]
line = [int(i) for i in f.readline().strip().split()]
a, b = line[0], line[1]
print(sum(d[a-1:b-1]))