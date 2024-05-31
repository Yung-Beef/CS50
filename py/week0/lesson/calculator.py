x = float(input("X: "))
y = float(input("Y: "))

print(x + y)

z = round(x + y)

# adds , seperators for thousands
print(f"{z:,}")
