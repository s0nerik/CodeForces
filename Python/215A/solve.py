import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
line = my_file.read().split("\n")
n = int(line[0])
a = [int(i) for i in line[1].split()]
m = int(line[2])
b = [int(i) for i in line[3].split()]
ints = []
for an in a:
    for bn in b:
        if bn//an == bn/an:
            ints.append(bn//an)
ints.sort(reverse=True)
print(ints.count(ints[0]))