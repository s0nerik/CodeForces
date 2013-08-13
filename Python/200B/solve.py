import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
n = int(my_file.readline())
p = [int(i) for i in my_file.readline().split()]
juice = 0
for i in p:
    juice += i/100
print(juice/n*100)