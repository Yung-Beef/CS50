import PIL
import sys

def main():
# ensure there's only 2 CLAs, and that it's a valid file (sys.exit() if not)
    if len(sys.argv) != 3:
        sys.exit("Invalid")
        
    valid = [".jpg", ".jpeg", ".png"]
    if sys.argv[1].endswith(valid) is False:
        sys.exit("Invalid file type")
    if sys.argv[2].endswith(valid) is False:
        sys.exit("Invalid file type")

    if sys.argv[1].endswith(".csv") is False:
        sys.exit("Invalid file type")
    try:
        with open(sys.argv[1], "r") as csvfile:

    except FileNotFoundError:
        sys.exit("File not found")


if __name__ == "__main__":
    main()
