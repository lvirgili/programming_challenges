j = set()
while True:
    try:
        j.add(input())
    except EOFError:
        break
print(len(j))