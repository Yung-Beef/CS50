from datetime import date


def main():
    ...
    # get date input with regex, sys.exit if invalid format

    birthdate = date.fromisoformat(input("Birth date: "))

    print(birthdate)

    # one object for today's date, one object for their birth date

    # operator overload to subtract?

    # convert into the output text

...


if __name__ == "__main__":
    main()
