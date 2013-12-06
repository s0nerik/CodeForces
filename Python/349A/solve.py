import sys

f = sys.stdin
#f = open("input.txt", "r")

n = int(f.readline())
a = [int(i) for i in f.readline().strip().split(" ")]

note = {25: 0, 50: 0, 100: 0}

for i in a:
    if i == 25:
        note[25] += 1
    elif i == 50:
        if note[25] > 0:
            note[25] -= 1
            note[50] += 1
        else:
            print('NO')
            break
    elif i == 100:
        if note[50] > 0 and note[25] > 0:
            note[50] -= 1
            note[25] -= 1
            note[100] += 1
        elif note[25] > 2:
            note[25] -= 3
            note[100] += 1
        else:
            print('NO')
            break
else:
    print('YES')