import sys
#my_file = sys.stdin
#my_file = open("input.txt", "r")
line = input()
lower, upper = 0, 0
for char in line:
    if char.isupper():
        upper += 1
    else:
        lower += 1
if upper > lower:
    print(line.upper())
else:
    print(line.lower())