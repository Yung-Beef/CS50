string = input("Fraction: ").split(sep="/")
x = int(string[0])
y = int(string[1])

percent = int(float(x / y) * 100)

print(percent)
