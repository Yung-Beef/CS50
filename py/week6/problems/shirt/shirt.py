from PIL import Image
from PIL import ImageOps
import os
import sys

def main():
# ensure there's only 2 CLAs, and that it's a valid file (sys.exit() if not)
    if len(sys.argv) != 3:
        sys.exit("Invalid")

    # checks that both inputs have a valid file extension
    valid = (".jpg", ".jpeg", ".png")
    if os.path.splitext(sys.argv[1])[1] or os.path.splitext(sys.argv[2])[1] not in valid:
        sys.exit("Invalid file type")

    # checks that the both inputs have the same file extension
    if os.path.splitext(sys.argv[1])[1] != os.path.splitext(sys.argv[2])[1]:
        sys.exit("Please enter two files of the same type")


    try:
        # open the input and shirt images, crop the input image to match the shirt, paste the shirt onto the input, and save
        shirt = Image.open("shirt.png")
        size = shirt.size
        input = Image.open(sys.argv[1])

        altered = ImageOps.fit(input, size=size)
        altered.paste(shirt, shirt)
        altered.save(sys.argv[2])

    except FileNotFoundError:
        sys.exit("File not found")


if __name__ == "__main__":
    main()
