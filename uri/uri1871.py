line = input()

while line != "0 0":
    ns = line.split(" ")
    a = int(ns[0])
    b = int(ns[1])
    print(str(a + b).replace("0", ""))
    line = input()
