import csv
import sys

def main():
# ensure there's only 1 CLA, and that it's a valid file (sys.exit() if not)
    if len(sys.argv) != 3:
        sys.exit("Invalid")
    try:
        with open(sys.argv[1], "r") as before:
            reader = csv.DictReader(before)
            with open(sys.argv[2], "a") as after:
                writer = csv.DictWriter(after)
                for row in reader:




                #file.write(f"{name}\n")

    except FileNotFoundError:
        sys.exit("File not found")


if __name__ == "__main__":
    main()
