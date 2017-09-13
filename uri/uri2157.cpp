N = int(input())

for n in range(N):
    line = input().split(' ')
    a = int(line[0])
    b = int(line[1])
    ans = ""
    for i in range(a, b + 1):
        ans += str(i)
    ans += ans[::-1]
    print(ans)
