from fractions import Fraction

good = [0, 2, 3]
for i in range(3, 42):
    good.append(good[i-1] + good[i-2])

ffs = []
for i in range(1, 42):
    ffs.append(Fraction(good[i], 2**i))


while True:
    try:
        n = int(input())
        print("{}/{}".format(ffs[n-1].numerator, ffs[n-1].denominator))
    except EOFError:
        break
