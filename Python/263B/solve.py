import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
line = [int(i) for i in my_file.readline().strip("\n").split()]
n, k = line[0], line[1]
a = [int(i) for i in my_file.readline().split()]
a = sorted(a, reverse=True)
if k>n:
    print('-1')
else:
    print(a[k-1], 0)