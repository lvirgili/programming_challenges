caso = 1
while True:
    try:
        small = input().strip()
        big = input().strip()
        ss = len(small)
        bs = len(big)
        pos = 0
        lastpos = 0
        total = 0

        while pos <= bs - ss:
            if big[pos:(pos + ss)] == small:
                total += 1
                lastpos = pos
            pos += 1

        print("Caso #{}:".format(caso))
        if total > 0:
            print("Qtd.Subsequencias: {}".format(total))
            print("Pos: {}".format(lastpos + 1))
        else:
            print("Nao existe subsequencia")
        print()
        pos = 0
        caso += 1
    except EOFError:
        break
