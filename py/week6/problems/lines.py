import sys

def main():
# ensure there's only 1 CLA, and that it's a valid file (sys.exit() if not)
    if len(sys.argv) != 2:
        sys.exit("Invalid")
    try:
        file = open(sys.argv[1])
    except FileNotFoundError:
        sys.exit("File not found")

    print(number_of_lines(file))

    close(file)

def number_of_lines(file):
    lines = 0
    for line in file:
        stripped = line.lstrip()
        if stripped.startswith("#"):
            continue
        elif len(stripped) == 0:
            continue
        else:
            lines += 1





    return lines


if __name__ == "__main__":
    main()

