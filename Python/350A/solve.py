import sys

f = sys.stdin
#f = open("input.txt", "r")

n, m = map(int, f.readline().split())

right = [int(i) for i in f.readline().strip().split()]
wrong = [int(i) for i in f.readline().strip().split()]

right.sort()
wrong.sort()

minWrong = min(wrong)
maxRight, minRight = max(right), min(right)

if minRight*2 < minWrong and maxRight < minWrong:

    if minRight*2 > maxRight and minRight*2 < minWrong:
        print(minRight*2)
    else:
        print(maxRight)
else:
    print(-1)