import datetime
while True:
    try:
        inp = input().split(' ')
        mes = int(inp[0])
        dia = int(inp[1])
        date = datetime.date(2016, mes, dia)
        natal = datetime.date(2016, 12, 25)
        delta = natal - date
        if delta.days == 0:
            print("E natal!")
        elif delta.days == 1:
            print("E vespera de natal!")
        elif delta.days < 0:
            print("Ja passou!")
        else:
            print("Faltam {} dias para o natal!".format(delta.days))
    except EOFError:
        break
