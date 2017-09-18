laugh = input()
vwls = ""

for c in laugh:
    if c in 'aeiou':
        vwls += c
        
if vwls == vwls[::-1]:
    print("S")
else:
    print("N")

