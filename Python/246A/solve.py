#import sys
#my_file = sys.stdin
#my_file = open("input.txt", "r")
n = int(input())
if n > 2:
    lst = list(range(n-1,0,-1))
    lst.insert(0, n-1)
    for i in lst:
        print(i, end=" ")
else:
    print(-1)