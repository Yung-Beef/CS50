from datetime import date
import sys

def main():
    ...
    # get date input with regex, sys.exit if invalid format
    try:
        birthdate = date.fromisoformat(input("Birth date: "))
    except ValueError:
        sys.exit("Invalid date")
    today = date.today()

    minutes = (today - birthdate).days * 1440

    print(minutes)

    # one object for today's date, one object for their birth date

    # operator overload to subtract?

    # convert into the output text

...


if __name__ == "__main__":
    main()
