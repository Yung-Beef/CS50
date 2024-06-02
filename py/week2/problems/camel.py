input = input("camelCase: ")
first = None
second = None
counter = 0

for _ in input:
    counter += 1
    if input.isupper(input[_]):
        break

second_length = len(input) - counter

for _ in counter:
    first = first + input[_]
for _ in second_length:
    second = second + input[_ + counter]

print(first + "_" + second)
