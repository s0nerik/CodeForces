import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
line = list(map(int, my_file.readline().split()))
n, m = line[0], line[1]

def rec_check():
    global m
    if n == 1:
        m = 0
        return
    for i in range(1, n+1):
        if m >= i:
            m -= i
        else:
            break
    else:
        rec_check()

rec_check()

print(m)