import re

def main():
    s = input("Date: ")
    print(convert(s))

def convert(s):
    try:
        date = re.fullmatch(f"([0-9][0-9]?)/([0-9][0-9]?)/([0-9][0-9]?)", s)
        times = re.fullmatch(r"([0-9][0-9]?(?::[0-9][0-9])?) (AM|PM)", s)
        time, half = times.group(1), times.group(2)

        #handles 9 AM vs 9:00 AM and gets all of the variables set up and as integers
        if ":" in time:
            hour, minute = time.split(":")
            hour = int(hour)
            minute = int(minute)
        else:
            hour = int(time)
            minute = 0

        # raises value error if invalid time format
        if month > 12 or day > 31:
            raise ValueError

    except AttributeError:
        raise ValueError



    return

if __name__ == "__main__":
    main()
