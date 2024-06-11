import csv
import tabulate
import sys

def main():
# ensure there's only 1 CLA, and that it's a valid file (sys.exit() if not)
    if len(sys.argv) != 2:
        sys.exit("Invalid")
    if sys.argv[1].endswith(".csv") is False:
        sys.exit("Invalid file type")
    try:
        with open(sys.argv[1], "r") as csvfile:
            reader = csv.DictReader(csvfile, fieldnames=["Sicilian Pizza", "Small", "Large"])
            price_grid(reader)
    except FileNotFoundError:
        sys.exit("File not found")


def price_grid(file):
    print(tabulate(file), headers="firstrow")


if __name__ == "__main__":
    main()

