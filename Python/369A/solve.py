import sys

f = sys.stdin
#f = open("input.txt", "r")

a = f.readline().strip().split()

n, m, k = map(int, a)

a = [int(i) for i in f.readline().strip().split()]

wash = 0

for i in a:
    if i == 1:
        if m < 1:
            wash += 1
        else:
            m -= 1
    elif i == 2:
        if k < 1:
            if m < 1:
                wash += 1
            else:
                m -= 1
        else:
            k -= 1

print(wash)