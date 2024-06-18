import csv
import sys

def main():
# ensure there's only 2 CLAs, and that it's a valid file (sys.exit() if not)
    if len(sys.argv) != 3:
        sys.exit("Invalid")
    try:
        with open(sys.argv[1], "r") as before:
            reader = csv.DictReader(before)

            with open(sys.argv[2], "w") as after:
                #set the header names for the new file
                fieldnames = ["first", "last", "house"]
                writer = csv.DictWriter(after, fieldnames=fieldnames)
                writer.writeheader()

                for row in reader:
                    #split the name string into 2 parts
                    last, first = row["name"].split(", ")
                    house = row["house"]
                    writer.writerow({"first": first, "last": last, "house": house})

    except FileNotFoundError:
        sys.exit("File not found")


if __name__ == "__main__":
    main()
