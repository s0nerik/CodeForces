import sys
#f = sys.stdin
#f = open("input.txt", "r")
n = int(input())
n -= 10
if n <= 0 or n > 11:
    print(0)
elif n == 11:
    print(4)
elif n == 10:
    print(15)
else:
    print(4)