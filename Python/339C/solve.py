import sys
sys.setrecursionlimit(100000)
f = sys.stdin
#f = open("input.txt", "r")
w = f.readline().strip()
m = int(f.readline())
weight = []
for i in range(len(w)):
    if w[i] == "1":
        weight.append(i+1)

def solve(arr=[], last=-1, delta=0):
    if len(arr) == m:
        print("YES")
        print(*arr)
        exit(0)
    else:
        for i in weight:
            if i != last:
                if delta >= 0 and delta-i < 0:
                    solve(arr + [i], i, delta-i)
                elif delta < 0 and delta + i > 0:
                    solve(arr + [i], i, delta+i)
solve()
print("NO")