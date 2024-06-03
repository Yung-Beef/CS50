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
    #numbers must come at the end
    



main()
