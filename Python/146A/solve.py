import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
n = int(my_file.readline().strip())
digs = my_file.readline().strip()
for dig in digs:
    if '4' is not dig and '7' is not dig:
        print("NO")
        break
else:
    if sum([int(i) for i in list(digs)[:int(n/2)]]) == sum([int(i) for i in list(digs)[int(n/2):]]):
        print("YES")
    else:
        print("NO")