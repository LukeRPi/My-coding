import math

print("1 - Calcolo ipotenusa")
print("2 - Calcolo cateto")
print("3 - Calcolo altezza")

opt=input("Funzione: ")

if opt == 1:
	a=input("Cateto 1: ")
	b=input("Cateto 2: ")
	c=a*a
	d=b*b
	m=c+d
	print math.sqrt(m)

if opt == 2:
	e=input("Ipotenusa: ")
	f=input("Cateto: ")
	g=e*e
	h=f*f
	n=g-h
	print math.sqrt(n)

if opt == 3:
	x=input("Cateto 1: ")
	y=input("Cateto 2: ")
	z=input("Ipotenusa: ")
	i=x*y
	l=float(i)
	print(l/z)
