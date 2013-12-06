import sys

f = sys.stdin
#f = open("input.txt", "r")

n = int(f.readline())
a = f.readline().strip().split(" ")

b = a.count('5')
c = a.count('0')
print(int('5'*(b-b%9) + '0'*c) if c else -1)