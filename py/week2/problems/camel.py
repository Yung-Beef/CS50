input = input("camelCase: ")

for character in input:
        if character.isupper():
            print("_", end="")
        print(character.lower(), end="")
print("\n")
