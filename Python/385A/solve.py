import sys

# inp = open("input.txt", "r")
inp = sys.stdin

n, c = map(int, inp.readline().split())
x = list(map(int, inp.readline().split()))

maxProfit = 0
i = 0
while i < len(x) - 1:
    profit = x[i] - x[i+1] - c
    if profit > maxProfit:
        maxProfit = profit
    i += 1

print(maxProfit)