import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
n = int(my_file.readline().strip())
a = [int(i) for i in my_file.readline().strip().split()]
negatives = []
positives = []
zeros = []
neg = 0
pos = 0
zer = 0
for i in a:
    if i > 0:
        pos += 1
    elif i < 0:
        neg += 1
    else:
        zer += 1
if pos == 0:
    for i in range(n):
        try:
            if a[i] < 0 and len(positives) < 2:
                positives.append(a[i])
                del a[i]
        except:
            pass
    for i in range(len(a)):
        try:
            if a[i] < 0 and len(negatives) < 1:
                negatives.append(a[i])
                del a[i]
                break
        except:
            pass
    zeros = a
else:
    for i in range(n):
        try:
            if a[i] > 0 and len(positives) < 1:
                positives.append(a[i])
                del a[i]
                break
        except:
            pass
    for i in range(len(a)):
        try:
            if a[i] < 0 and len(negatives) < 1:
                negatives.append(a[i])
                del a[i]
                break
        except:
            pass
    zeros = a
print(len(negatives), " ".join(map(str, negatives)))
print(len(positives), " ".join(map(str, positives)))
print(len(zeros), " ".join(map(str, zeros)))