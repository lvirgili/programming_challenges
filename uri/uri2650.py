line = input().split(' ')
n = int(line[0])
w = int(line[1])

for i in range(n):
    line = input().split(" ")
    name = ""
    for j in range(len(line) - 2):
        name += line[j] + " "
    name += line[len(line) - 2]
    h = int(line[-1])
    if h > w:
        print(name)
