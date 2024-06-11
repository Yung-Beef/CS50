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
                fieldnames = ["name", "house"]
                writer = csv.DictWriter(after, fieldnames=fieldnames)

                writer.writeheader()
                for row in reader:
                    last, first = row["name"].split(", ")
                    house = row["house"]
                    writer.writerow({"first": first, "last": last, "house": house})
                    print(first, last, house)






                #file.write(f"{name}\n")

    except FileNotFoundError:
        sys.exit("File not found")


if __name__ == "__main__":
    main()
