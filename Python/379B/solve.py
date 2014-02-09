import sys
inp = sys.stdin
# inp = open("input.txt", "r")

n = int(inp.readline())
a = list(map(int, inp.readline().split()))

s = sum(a)

i = 0
while s:
    if a[i]:
        print("P", end="")
        a[i] -= 1
        s -= 1

        if a[i]:
            if i != 0:
                print("LR", end="")
            else:
                print("RL", end="")
    else:
        i += 1
        print("R", end="")