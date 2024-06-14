from datetime import date
import inflect
import sys

def main():
    print(text_convert(time_difference()))

def time_difference():
    try:
        birthdate = date.fromisoformat(input("Birth date: "))
    except ValueError:
        sys.exit("Invalid date")

    return (date.today() - birthdate).days * 1440

def text_convert(minutes):
    p = inflect.engine()
    return p.number_to_words(minutes, andword="")

if __name__ == "__main__":
    main()
