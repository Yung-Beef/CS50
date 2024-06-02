input = input("camelCase: ")
first_length = 0

for _ in input:
        if 'input[_]'.isupper():
            break
        else:
             first_length += 1

second_length = len(input) - first_length
first = [range(first_length)]
second = [range(second_length)]

for _ in range(first_length):
    first[_] = input[_]
for _ in range(second_length):
    second.join(input[_ + first_length])

first_word.join(first)

print(first_word)

print(first + "_" + second)
