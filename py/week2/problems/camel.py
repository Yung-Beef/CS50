input = input("camelCase: ")
first = None
second = None
counter = 0

for _ in input:
    counter += 1
    if isupper(input[_]):
        break

second_length = len(input) - counter

for counter in input:
    first = first + counter
for 
