from string import ascii_uppercase
n = int(input())

def RCtoStd(cell):
    col = int(cell[cell.index("C")+1:])
    row = cell[1:cell.index("C")]
    num = [i for i in ascii_uppercase]
    convCol = ""
    while True:
        convCol += num[col%26-1]
        if col <= 26:
            break
        else:
            if col%26 == 0:
                col = (col - 1) // 26
            else:
                col //= 26
    return convCol[::-1]+row

def stdToRC(cell):
    num = [i for i in ascii_uppercase]
    for i in range(len(cell)):
        if cell[i].isnumeric():
            end = i
            break
    col = cell[:end]
    row = cell[end:]
    convCol = 0
    for i in range(len(col)):
        convCol += (num.index(col[i])+1)*26**(len(col)-1-i)
    return "R"+row+"C"+str(convCol)

for i in range(n):
    s = input()
    if "R" in s[0] and s[1] in "1234567890" and "C" in s[2:]:
        print(RCtoStd(s))
    else:
        print(stdToRC(s))