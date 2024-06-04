groceries = {name, quantity}

while True:
    try:
        food = input()
        if food not in groceries:
            groceries.d[food] = 1
        if food in groceries:
            groceries.d[food] += 1
    except EOFError:
        break



