import sys

f = sys.stdin
# f = open("input.txt", "r")

def convert(x):
    return ("%02d" % (x//60)) + ":" + ("%02d" % (x % 60))

aHours, aMinutes = map(int, f.readline().split(":"))
bHours, bMinutes = map(int, f.readline().split(":"))

totalA = aHours * 60 + aMinutes
totalB = bHours * 60 + bMinutes

# print(totalA, totalB)

# print("%02d" % aHours, "%02d" % aMinutes)
# print("%02d" % bHours, "%02d" % bMinutes)

if totalA-totalB < 0:
    print(convert(24*60+totalA-totalB))
else:
    print(convert(totalA-totalB))