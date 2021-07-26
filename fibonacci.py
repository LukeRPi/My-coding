print(1)
print(" ")
print(1)
print(" ")
print(2)
print(" ")

a = 2
b = 1

for x in range (0, 10000):
	b = a + b
	print(b)
	print("  ")

	a = a + b
	print(a)
        print("  ")
