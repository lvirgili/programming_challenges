n = int(input())
line = input().split()
sp = 0

for word in line:
    if sp:
        print(" ", end = "")
    if len(word) == 3 and word[0:2] == "UR":
        print("URI", end = "")
    elif len(word) == 3 and word[0:2] == "OB":
        print("OBI", end = "")
    else:
        print(word, end = "")
    sp += 1
print()
