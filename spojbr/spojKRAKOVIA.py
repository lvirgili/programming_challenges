caso = 1
while True:
	amigos, total, itens = 0, 0, 0
	s = raw_input()
	a, b = s.split()
	itens = int(a)
	amigos = int(b)
	if amigos == 0 and itens == 0:
		break
	for i in range(itens):
		valor = int(raw_input())
		total += valor
	print "Bill #" + str(caso) + " costs " + str(total) + ": each friend should pay " + str(int(total / amigos))
	print
	caso += 1