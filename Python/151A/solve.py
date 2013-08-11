import sys
from math import floor
my_file = sys.stdin
#my_file = open("input.txt", "r")
line = my_file.readline().split()
n = int(line[0])
k = int(line[1])
l = int(line[2])
c = int(line[3])
d = int(line[4])
p = int(line[5])
nl = int(line[6])
np = int(line[7])
water = floor(k*l/nl)
limes = c*d
salt = floor(p/np)
print(floor(min(water, limes, salt)/n))