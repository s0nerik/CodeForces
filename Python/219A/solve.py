import sys
#my_file = sys.stdin
#my_file = open("input.txt", "r")
k = int(input())
string = input()
sorted = "".join(sorted(set(string)))
for char in sorted:
    if string.count(char)%k != 0:
        print(-1)
        break
else:
    for i in range(k):
        for char in sorted:
            for rep in range(int(string.count(char)/k)):
                print(char, end="")