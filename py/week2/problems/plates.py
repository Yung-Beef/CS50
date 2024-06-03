def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    #must start with 2 letters
    if (s[0:1].isalpha == 1):
        return False
    #2-6 characters
    if len(s) < 2 or len(s) > 6:
        return False
    #numbers must come at the end, and the first number cannot be a 0
    counter = 0
    for character in s:
        if character.isnumeric():
            if (s[counter:(len(s) - 1)].isnumeric() == 1):
                return False
            elif character == "0":
                return False
        else:
            counter += 1
    #no periods, spaces, or punctuation
    for character in s:
        if character.isalnum():
            continue
        else:
            return False

    return True



main()
