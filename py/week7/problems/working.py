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
            miunte1 = 0
        if ":" in time2:
            hour2, minute2 = time2.split(":")
            hour2 = int(hour2)
            minute2 = int(minute2)
        else:
            hour2 = int(time2)
            minute2 = 0

        first = [hour1, half1]
        second = [hour2, half2]
        t = [first, second]

        for time in t:
            if time[0] == 12 and time[1] == "AM":
                time[0] = 0
            elif time[1] == "PM":
                time[0] = time[0] + 12





            if half2 == "AM" and hour2 == "12":
                hour2 = "0"
            elif half2 == "PM":
                hour2 = str(int(hour2) + 12)
            time2 = hour2 + ":" + minute2
        else:
            if half2 == "AM" and time2 == "12":
                time2 = "0"
            elif half2 == "PM":
                time2 = str(int(time2) + 12)


        print(time1, half1, time2, half2)

        # if hour1 > 12 or hour2 > 12 or minute1 > 60 or minute2 > 60:
        #     raise ValueError
    except AttributeError:
        raise ValueError

    return f"{time1} to {time2}"

...


if __name__ == "__main__":
    main()
