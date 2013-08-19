import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
n = int(my_file.readline().strip())
pages = [int(i) for i in my_file.readline().strip().split()]
res = 0
def iterate():
    global res, n, pages
    while res < n:
        for i in range(len(pages)):
            if res+pages[i] >= n:
                print(i+1)
                return
            else:
                res += pages[i]
iterate()