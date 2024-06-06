def main():
    string = input("Input: ")
    print(shorten(string))


def shorten(word):
    vowels = ["a", "A", "e", "E", "i", "I", "o", "O", "u", "U", ]
    new_string = ""
    for character in word:
        if character in vowels:
            continue
        else:
            new_string += character

    return new_string


if __name__ == "__main__":
    main()
