import PIL
import sys

def main():
# ensure there's only 2 CLAs, and that it's a valid file (sys.exit() if not)
    if len(sys.argv) != 3:
        sys.exit("Invalid")

    valid = (".jpg", ".jpeg", ".png")
    if sys.argv[1].endswith(valid) is False:
        sys.exit("Invalid file type")
    if sys.argv[2].endswith(valid) is False:
        sys.exit("Invalid file type")
    if (sys.argv[1].rpartition("."))[2] != (sys.argv[2].rpartition("."))[2]:
        sys.exit("Please enter two files of the same type")


    try:
        with PIL.Image.open(shirt.png) as shirt:
            size = shirt.size
            with PIL.Image.open(sys.argv[1]) as input:
                altered = PIL.ImageOps.fit(input, size=)

    except FileNotFoundError:
        sys.exit("File not found")


if __name__ == "__main__":
    main()
