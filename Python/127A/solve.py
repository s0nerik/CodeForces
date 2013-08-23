import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
line = [int(i) for i in my_file.readline().strip().split()]
n, k = line[0], line[1]
line = [list(map(int, i.strip().split())) for i in my_file.readlines()]
l = 0
for i in range(1, n):
    x = line[i][0] - line[i-1][0]
    y = line[i][1] - line[i-1][1]
    l += (x**2 + y**2)**0.5
print(l/50*k)