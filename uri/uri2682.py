last = -1
bad = False
while True:
    try:
        new = int(input())
        if not bad and new > last:
            last = new
        else:
            bad = True
    except EOFError:
        break
print(last + 1)