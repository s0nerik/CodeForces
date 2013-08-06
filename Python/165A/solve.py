#import sys
import fileinput
#my_file = sys.stdin
#my_file = open("input.txt", "r")
#points = my_file.read().split("\n")[1:]
points = []
for line in fileinput.input():
    points.append(line.strip("\n"))
points = points[1:]
point = []
for line in points:
    point.append([int(i) for i in line.split()])
del points
count = 0
for pt in point:
    right = False
    left = False
    up = False
    bottom = False
    for p in point:
        if p[0] > pt[0] and p[1] == pt[1]:
            right = True
        if p[0] < pt[0] and p[1] == pt[1]:
            left = True
        if p[1] > pt[1] and p[0] == pt[0]:
            up = True
        if p[1] < pt[1] and p[0] == pt[0]:
            bottom = True
    if right and left and up and bottom:
        count += 1
print(count)