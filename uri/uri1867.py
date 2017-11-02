def sum_digits(st):
    s = 0
    for c in st:
        s += int(c)
    return s   

while True:
    line = input().strip().split(' ')
    x = line[0]
    y = line[1]
    if x == "0" and y == "0":
        break
    s = sum_digits(x)
    while s > 9:
        s = sum_digits(str(s))
    t = sum_digits(y)
    while t > 9:
        t = sum_digits(str(t))
    if s == t:
        print(0)
    elif s > t:
        print(1)
    else:
        print(2)
