input = input("camelCase: ")
first = ""
second = ""
counter = 0

for _ in input:
    counter += 1
    if 'input[_]'.isupper():
        break

second_length = len(input) - counter

for _ in range(counter):
    first.join(input[_])
for _ in range(second_length):
    second.join(input[_ + counter])

print(first)

print(first + "_" + second)
