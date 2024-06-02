input = input("camelCase: ")
counter = 0

for _ in input:
    counter += 1
    if 'input[_]'.isupper():
        break

second_length = len(input) - counter
first = [range(counter)]

for _ in range(counter):
    first[_] = input[_]
for _ in range(second_length):
    second.join(input[_ + counter])

first_word.join(first)

print(first_word)

print(first + "_" + second)
