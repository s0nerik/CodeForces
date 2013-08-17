import sys
#my_file = sys.stdin
#my_file = open("input.txt", "r")
k = int(input())
l = int(input())
for i in range(1, l//k+1):
    if k**i == l:
        print("YES")
        print(i-1)
        break
    elif k**i > l:
        print("NO")
        break
else:
    print("NO")