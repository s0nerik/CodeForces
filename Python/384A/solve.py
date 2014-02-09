# import sys
# inp = open("input.txt", "r")
# inp = sys.stdin

n = int(input())

if n % 2:
    fLine = n // 2 + 1
    nLine = n // 2
else:
    fLine = n // 2
    nLine = fLine

maxNumber = fLine**2 + nLine**2

print(maxNumber)

for i in range(n):
    if not i % 2:
        isCoder = True
    else:
        isCoder = False

    line = ""

    for j in range(n):
        if isCoder:
            line += "C"
        else:
            line += "."
        isCoder = not isCoder
    print(line)