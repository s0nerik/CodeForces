import sys

# inp = open("input.txt", "r")
inp = sys.stdin

n = int(inp.readline())
x = list(map(int, inp.readline().split()))

s, d = 0, 0

i = 0
l = len(x)
while i < l:

    if x[0] > x[-1]:
        max = x[0]
        del x[0]
    else:
        max = x[-1]
        del x[-1]

    if i % 2:  # Dima
        d += max

    else:  # Serega
        s += max

    i += 1


print(s, d)