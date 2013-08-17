import sys
#my_file = sys.stdin
#my_file = open("input.txt", "r")
n = int(input())
a = [[] for i in range(n)]
for i in range(int(n**2/2)):
    a[i%n].append(i+1)
for i in range(int(n**2), int(n**2/2), -1):
    a[(n-i)%n].append(i)
for i in a:
    for k in i:
        print(k, end=" ")
    print()