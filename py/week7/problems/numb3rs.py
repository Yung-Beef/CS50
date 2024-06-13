import re
import sys


def main():
    print(validate(input("IPv4 Address: ")))


def validate(ip):
    try:
        matches = re.fullmatch(r"([0-9][0-9]?[0-9]?)\.([0-9][0-9]?[0-9]?)\.([0-9][0-9]?[0-9]?)\.([0-9][0-9]?[0-9]?)", ip)
        if int(matches.group(1)) > 255 or int(matches.group(2)) > 255 or int(matches.group(3)) > 255 or int(matches.group(4)) > 255:
            return False
        else:
            return True
    except AttributeError:
        return False


if __name__ == "__main__":
    main()
