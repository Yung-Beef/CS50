import sys

def main():
# ensure there's only 1 CLA, and that it's a valid file (sys.exit() if not)
    if len(sys.argv) != 2:
        sys.exit("Invalid")
    try:
        file = open(sys.argv[1])
    except FileNotFoundError:
        sys.exit("File not found")

    number_of_lines(file)

    close(file)

def number_of_lines():





if __name__ == "__main__":
    main()

