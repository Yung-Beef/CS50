from datetime import date
import sys

def main():
    print(text_convert(time_difference()))

def time_difference():
    try:
        birthdate = date.fromisoformat(input("Birth date: "))
    except ValueError:
        sys.exit("Invalid date")

    today = date.today()

    return (today - birthdate).days * 1440

def text_convert(minutes):
    


...


if __name__ == "__main__":
    main()
