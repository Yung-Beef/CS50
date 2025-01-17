import csv
from tabulate import tabulate
import sys

def main():
# ensure there's only 1 CLA, and that it's a valid file (sys.exit() if not)
    if len(sys.argv) != 2:
        sys.exit("Invalid")
    if sys.argv[1].endswith(".csv") is False:
        sys.exit("Invalid file type")
    try:
        with open(sys.argv[1], "r") as csvfile:
            reader = csv.reader(csvfile)
            print(tabulate(reader, headers="firstrow", tablefmt="grid"))
            # for row in reader:
            #     print(tabulate(row, headers="firstrow"))
            #print(tabulate(row, headers="firstrow"))
    except FileNotFoundError:
        sys.exit("File not found")


if __name__ == "__main__":
    main()

