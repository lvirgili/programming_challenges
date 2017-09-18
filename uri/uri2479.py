N = int(input())

children = []
good, bad = 0, 0
for n in range(N):
    is_good, name = input().split(' ')
    children.append(name)
    if is_good == '+':
        good += 1
    else:
        bad += 1
        
for name in sorted(children):
    print(name)
print("Se comportaram: {} | Nao se comportaram: {}".format(good, bad))