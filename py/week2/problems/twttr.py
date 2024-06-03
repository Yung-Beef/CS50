def main():
    string = input("Input: ")
    print("Output: ", end="")
    removevowels(string)

def removevowels(input):
    vowels = ["a", "A", "e", "E", "i", "I", "o", "O", "u", "U", ]
    for character in input:
        if character in vowels:
            continue
        else:
            print(f"{character}", end="")
    print("\n")

main()
