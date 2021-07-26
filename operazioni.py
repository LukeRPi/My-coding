import math

print("1 - Addizione")
print("2 - Sottrazione")
print("3 - Moltiplicazione")
print("4 - Divisione")
print("5 - Radice quadrata")
print("6 - Elevamento a potenza")

opt=input("Funzione: ")

if opt == 1:
	a=input("Numero 1: ")
  	b=input("Numero 2: ")
	print(a+b)

if opt == 2:
	c=input("Numero 1: ")
	d=input("Numero 2: ")
	print(c-d)

if opt == 3:
	e=input("Numero 1: ")
	f=input("Numero 2: ")
	print(e*f)

if opt == 4:
	g=input("Numero 1: ")
	h=input("Numero 2: ")
	z=float(g)
	print(z/h)

if opt == 5:
	i=input("Numero: ")
	print math.sqrt(i)

if opt == 6:
	l=input("Numero: ")
	print(l*l)
