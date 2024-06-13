import re
import sys


def main():
    print(validate(input("IPv4 Address: ")))


def validate(ip):
    if match := re.fullmatch(r"(\w){3,5}\.(\w){3,5}\.(\w){3,5}\.(\w){3,5}", ip):
        return True
    else
        return False


if __name__ == "__main__":
    main()
