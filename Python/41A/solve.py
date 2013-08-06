import sys
my_file = sys.stdin
##my_file = open("input.txt", "r")
s = my_file.readline().strip("\n")
t = my_file.readline().strip("\n")
if t == s[::-1]:
    print("YES")
else:
    print("NO")