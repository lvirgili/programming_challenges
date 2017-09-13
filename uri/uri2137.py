while True:
    try:
        n = int(input())
        codes = []
        for i in range(n):
            codes.append(int(input()))
        codes = sorted(codes)
        for c in codes:
            print("{0:04d}".format(c))
    except EOFError:
        break
