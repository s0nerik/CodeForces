import sys
#f = sys.stdin
#f = open("input.txt", "r")
a = input()
def solve():
    for i in a:
        if i != "1" and i != "4":
            print("NO")
            return
    if a[0] == "1":
        for i in range(1,len(a)-2):
            if a[i] == a[i+1] == a[i+2] == "4":
                print("NO")
                return
        else:
            print("YES")
            return
    else:
        print("NO")
        return
solve()