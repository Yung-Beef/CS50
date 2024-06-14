from datetime import date
import inflect
import sys

def main():
    minutes = time_difference()
    text_convert(minutes)

def time_difference():
    try:
        birthdate = date.fromisoformat(input("Birth date: "))
    except ValueError:
        sys.exit("Invalid date")

    today = date.today()

    return (today - birthdate).days * 1440

def text_convert(minutes):
    words = inflect.engine.number_to_words(minutes, andword="")
    return words


...


if __name__ == "__main__":
    main()
