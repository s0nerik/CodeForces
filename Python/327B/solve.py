import sys
#f = sys.stdin
#f = open("input.txt", "r")
n = int(input())
# a = [2]
# k = 3
# for i in range(1, n):
#     a.append(a[i-1] + 1)
#     j = 0
#     while j < i:
#         if a[i]%a[j] == 0:
#             a[i] += 1
#             j = 0
#         else:
#             j += 1
#     print(a[i])
# print(" ".join(map(str, a)))
for i in range(n, n+n):
    print(i, end=" ")