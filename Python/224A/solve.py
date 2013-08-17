import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
line = [int(i) for i in my_file.readline().split()]
x, y, z = line[0], line[1], line[2]
b = int(((x*y)/z)**0.5)
c = y//b
a = z//c
print(4*(a+b+c))