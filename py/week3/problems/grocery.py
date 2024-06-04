groceries = {}

while True:
    try:
        food = input()
        if food not in groceries:
            groceries[food] = 1
        if food in groceries:
            groceries[food] += 1
    except EOFError:
        break

groceries = sorted(groceries)

for key in groceries:
    print(f"{groceries.get(key)} {key}")

