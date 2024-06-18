groceries = {}

while True:
    try:
        food = input().upper()
        if food in groceries:
            groceries[food] += 1
        if food not in groceries:
            groceries[food] = 1
    except EOFError:
        break

groceries = sorted(groceries.items())

for key in groceries:
    print(f"{key[1]} {key[0]}")

