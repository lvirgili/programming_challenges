def fact(n):
  prod = 1
  for i in range(1, n + 1):
    prod *= i
  return prod

s = input().strip()
while s != "0":
  chars = set()
  for c in s:
    chars.add(c)
  print(fact(len(s)) // fact(len(s) - len(chars)))
  s = input().strip()