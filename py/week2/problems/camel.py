input = input("camelCase: ")
first_length = 0

for character in input:
        if character.isupper():
            break
        else:
             first_length += 1

lowered = input.lower()
second_length = len(input) - first_length

for _ in range(first_length):
    print(lowered[_], end="")

print("_", end="")

for _ in range(second_length):
    print(lowered[_ + first_length], end="")

print("")

