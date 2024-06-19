import re

def main():
    s = input("Time: ")
    hour, minute = convert(s)
    print(f"{hour}:{minute}")

def convert(s):
    try:
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
        if hour > 12 or minute >= 60:
            raise ValueError

        # converts the times
        if hour == 12 and half == "AM":
            hour = 0
        elif hour == 12 and half == "PM":
            hour = 12
        elif half == "PM":
            hour = hour + 12
    except AttributeError:
        raise ValueError

    return hour, minute

if __name__ == "__main__":
    main()
