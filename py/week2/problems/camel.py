input = input("camelCase: ")
first_length = 0

for character in input:
        if character.isupper():
            break
        else:
             first_length += 1

second_length = len(input) - first_length

for _ in range(first_length):
    print(input[_])

print("_")

for _ in range(second_length):
    print(input[_ + first_length].lower)

