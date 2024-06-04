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

sortedgroc = sorted(groceries.items())
print(sortedgroc)

for key in sortedgroc:
    #print(sortedgroc.get(key))
    print(key)
    print("\n")

