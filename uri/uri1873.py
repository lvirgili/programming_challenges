# pedra = 0
# papel = 1
# tesoura = 2
# lagarto = 3
# spock = 4
stuff = {"pedra" : 0, "papel" : 1, "tesoura" : 2, "lagarto" : 3, "spock" : 4}

results = [
    [0, -1, 1, 1, -1],
    [1, 0, -1, -1, 1],
    [-1, 1, 0, 1, -1],
    [-1, 1, -1, 0, 1],
    [1, -1, 1, -1, 0]
    ]
    
n = int(input())

for i in range(n):
    inp = input().split(" ")
    r, s = stuff[inp[0]], stuff[inp[1]]
    if results[r][s] == 1:
        print("rajesh")
    elif results[r][s] == 0:
        print("empate")
    else:
        print("sheldon")
    