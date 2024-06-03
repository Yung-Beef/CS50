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
            print(f"{s[counter:len(s)]}")
            if s[counter:len(s)].isnumeric() is False:
                return False
        else:
            counter += 1
    for character in s:
        if character.isalpha() and ((character + 1) == 0):
            return False
    #no periods, spaces, or punctuation
    for character in s:
        if character.isalnum():
            continue
        else:
            return False

    return True



main()
