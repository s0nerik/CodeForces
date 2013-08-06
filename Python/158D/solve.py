import sys
##my_file = sys.stdin
my_file = open("input.txt", "r")
num = int(my_file.readline())
att = my_file.readline().split(" ")
for i in range(0,num):
    att[i]=int(att[i])

att_odd = [att[x] for x in range(0,num,2)]
att_even = [att[x] for x in range(1,num,2)]

def max_of_three(a,b,c):
    if sum(a) >= sum(b) and sum(a) >= sum(c):
        return a
    elif sum(b) >= sum(a) and sum(b) >= sum(c):
        return b
    else:
        return c

if num < 6:
    print sum(att)
elif num%3==0 or num%4==0 or num%5==0 or num%7==0 or num%11==0:
    print sum(max_of_three(att,att_odd,att_even))