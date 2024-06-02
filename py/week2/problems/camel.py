input = input("camelCase: ")
first_length = 0

for _ in input:
        if 'input[_]'.isupper():
            break
        else:
             first_length += 1

second_length = len(input) - first_length

for _ in range(first_length):
    print(input[_])

print("_")

for _ in range(second_length):
    print(input[_ + first_length])

