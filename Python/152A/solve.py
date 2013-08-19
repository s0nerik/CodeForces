import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
line = my_file.readline().split()
n, m = int(line[0]), int(line[1])
marks = my_file.read().split('\n')
subject = [[] for i in range(m)]
for subj in range(m):
    for student in range(n):
        subject[subj].append(marks[student][subj])
best = [[] for i in range(n)]
for subj in range(m):
    for student in range(n):
        if subject[subj][student] == max(subject[subj]):
            best[student].append(subj)
res = 0
for i in best:
    if i:
        res += 1
print(res)