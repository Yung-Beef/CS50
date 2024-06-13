import re
import sys


def main():
    print(convert(input("Hours: ")))


def convert(s):
    try:
        times = re.fullmatch(r"([0-9][0-9]?(?::[0-9][0-9])?) (AM|PM) to ([0-9][0-9]?(?::[0-9][0-9])?) (AM|PM)", s)
        time1, half1, time2, half2 = times.group(1), times.group(2), times.group(3), times.group(4)
        if ":" in time1:
            hour1, minute1 = time1.split(":")
            hour1 = int(hour1)
            minute1 = int(minute1)
        else:
            hour1 = int(time1)
            minute1 = 0
        if ":" in time2:
            hour2, minute2 = time2.split(":")
            hour2 = int(hour2)
            minute2 = int(minute2)
        else:
            hour2 = int(time2)
            minute2 = 0

        first = [hour1, minute1, half1]
        second = [hour2, minute2, half2]
        t = [first, second]

        for time in t:
            if time[0] == 12 and time[2] == "AM":
                time[0] = 0
            elif time[2] == "PM":
                time[0] = time[0] + 12

        print(first[0], first[1], first[2], second[0], second[1], second[2])

        # if hour1 > 12 or hour2 > 12 or minute1 > 60 or minute2 > 60:
        #     raise ValueError
    except AttributeError:
        raise ValueError

    return f"{first[0]:02}:{first[1]:02} to {second[0]:02}:{second[1]:02}"

...


if __name__ == "__main__":
    main()
