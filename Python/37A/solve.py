import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
n = int(my_file.readline().strip("\n"))
l = [int(i) for i in my_file.readline().strip("\n").split(" ")]
max = 1
for i in l:
    new = l.count(i)
    if new > max:
        max = new
l = list(set(l))
print(max, len(l))