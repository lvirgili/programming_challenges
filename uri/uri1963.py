inp = input().split(' ')
a = float(inp[0])
b = float(inp[1])

print("{0:.2f}%".format(((b - a) / a) * 100.0))
