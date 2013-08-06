import sys
my_file = sys.stdin
##my_file = open("input.txt", "r")
num = [int(i) for i in my_file.readline().strip("\n").split(" ")]
s = num[0]
n = num[1]
en = []
for i in my_file.readlines():
    en.append([int(k) for k in i.strip("\n").split(" ")])
##print(en)
en.sort()
for i in en:
    if s > i[0]:
        s += i[1]
    else:
        s = -1
if s>=0:
    print("YES")
else:
    print("NO")