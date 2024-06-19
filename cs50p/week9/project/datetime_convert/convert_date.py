import re

def main():
    s = input("Date: ")
    month, day, year = convert(s)
    print(f"{month}/{day}/{year}")

def convert(s):
    try:
        date = re.fullmatch(r"([0-9][0-9]?)/([0-9][0-9]?)/([0-9][0-9](?:[0-9][0-9])?)", s)
        month, day, year = int(date.group(1)), int(date.group(2)), int(date.group(3))

        # raises value error if invalid time format
        if month > 12 or day > 31:
            raise ValueError

    except AttributeError:
        raise ValueError

    return year, month, day

if __name__ == "__main__":
    main()
