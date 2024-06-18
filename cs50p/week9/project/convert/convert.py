import re

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
        if time["hour"] == 12 and time["half"] == "AM":
            time["hour"] = 0
        elif time["hour"] == 12 and time["half"] == "PM":
            time["hour"] = 12
        elif time["half"] == "PM":
            time["hour"] = time["hour"] + 12
    except AttributeError:
        raise ValueError

    return f"{first[0]:02}:{first[1]:02} to {second[0]:02}:{second[1]:02}"
