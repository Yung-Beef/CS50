import re
import sys


def main():
    print(validate(input("IPv4 Address: ")))


def validate(ip):
    match = re.fullmatch(r"([0-255]\.){3}[0-255]", ip)
    if match:
        return True
    else:
        return False

#under 200
[0-1]\d{0-2}
#under 250


if __name__ == "__main__":
    main()
