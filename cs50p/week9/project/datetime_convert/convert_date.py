import re

def main():
    s = input("Date: ")
    print(convert(s))

def convert(s):
    try:
        date = re.fullmatch(r"([0-9][0-9]?)/([0-9][0-9]?)/([0-9][0-9](?:[0-9][0-9])?)", s)
        month, day, year = int(date.group(1)), int(date.group(2)), int(date.group(3))

        # raises value error if invalid time format
        if month > 12 or day > 31:
            raise ValueError

    except AttributeError:
        raise ValueError



    return f"{month}/{date}/{year}"

if __name__ == "__main__":
    main()
