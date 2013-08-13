import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
map = [list(map(int, line.split())) for line in my_file.read().split("\n")]
original = [[1,1,1],[1,1,1],[1,1,1]]
def printlst(lst):
    for line in lst:
        for i in line:
            print(i, end="")
        print()
for line in range(3):
    for row in range(3):
        if map[line][row]%2 == 0:
            map[line][row] = 0
        else:
            map[line][row] = 1
for line in range(3):
    for row in range(3):
        if map[line][row] == 1:
            original[line][row] = original[line][row]^1
            if line == 0:
                original[line+1][row] = original[line+1][row]^1
            elif line == 2:
                original[line-1][row] = original[line-1][row]^1
            else:
                original[line+1][row] = original[line+1][row]^1
                original[line-1][row] = original[line-1][row]^1
            if row == 0:
                original[line][row+1] = original[line][row+1]^1
            elif row == 2:
                original[line][row-1] = original[line][row-1]^1
            else:
                original[line][row+1] = original[line][row+1]^1
                original[line][row-1] = original[line][row-1]^1
printlst(original)