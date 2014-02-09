# import sys

# f = sys.stdin
# f = open("input.txt", "r")

a, b = map(int, input().split())
aPoints, bPoints, draws = 0, 0, 0

for i in range(1, 7):
    if abs(a-i) < abs(b-i):
        aPoints += 1
    elif abs(a-i) > abs(b-i):
        bPoints += 1
    else:
        draws += 1

print(aPoints, draws, bPoints)