import re
import sys


def main():
    print(validate(input("IPv4 Address: ")))


def validate(ip):
    match = re.fullmatch(r"[0-2][0-5]?[0-5]?\.[0-2][0-5]?[0-5]?\.[0-2][0-5]?[0-5]?\.[0-2][0-5]?[0-5]?", ip)
    if match:
        return True
    else:
        return False


if __name__ == "__main__":
    main()
