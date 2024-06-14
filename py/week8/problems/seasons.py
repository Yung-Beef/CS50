from datetime import date
import inflect
import sys

def main():
    while True:
        try:
            birthdate = date.fromisoformat(input("Birth date: "))
            if birthdate < date.today():
                break
        except ValueError:
            sys.exit("Invalid date")

    print(text_convert(time_difference(birthdate)))

def time_difference(birthdate):
    return (date.today() - birthdate).days * 1440

def text_convert(minutes):
    p = inflect.engine()
    return p.number_to_words(minutes, andword="")

if __name__ == "__main__":
    main()
