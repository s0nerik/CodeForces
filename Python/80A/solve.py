import sys
my_file = sys.stdin
#my_file = open("input.txt", "r")
num = my_file.read().split(" ")
n, m = int(num[0]), int(num[1])

def prime_generator(m):
  prime = [2]
  nums = list(range(2, m))
  for i in range(2, m+1):
    for k in nums:
      if i%k==0:
        break
      elif i%k!=0 and k==i-1:
        prime.append(i)
  return prime

def is_next_prime(n, m):
  primes = prime_generator(m)
  if m in primes:
    if primes.index(n) == primes.index(m)-1:
      print "YES"
    else:
      print "NO"
  else:
    print "NO"

is_next_prime(n, m)