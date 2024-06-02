input = input("camelCase: ")
first_length = 0

for _ in input:
        if 'input[_]'.isupper():
            break
        else:
             first_length += 1

second_length = len(input) - counter
first = [range(first_length)]
second = [range(second_length)]

for _ in range(counter):
    first[_] = input[_]
for _ in range(second_length):
    second.join(input[_ + counter])

first_word.join(first)

print(first_word)

print(first + "_" + second)
