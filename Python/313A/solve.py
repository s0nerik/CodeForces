import sys
#my_file = sys.stdin
#my_file = open("input.txt", "r")
num = input()
tok = num[0]
num = num[1:]
if tok=='-':
    num1 = int(num[:len(num)-1])
    num2 = int(num[:len(num)-2]+num[len(num)-1:])
    if num1 < num2:
        if num1 == 0:
            print(0)
        else:
            print(tok+str(num1))
    else:
        if num2 == 0:
            print(0)
        else:
            print(tok+str(num2))
else:
    print(tok+num)