import sys
#f = sys.stdin
#f = open("input.txt", "r")
a, b, c = map(int, input().split())
print((a+b-1)*(c-1)+a*b)