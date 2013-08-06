import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
num = [int(i) for i in my_file.readline().strip("\n").split(" ")]
n = num[0]
m = num[1]
total = 0
for a in range(n+1):
    a_sqr = a**2
    for b in range(m+1):
        if a_sqr+b == n and a+b**2 == m:
            total += 1
print(total)