import re
import sys


def main():
    print(count(input("Text: ")))


def count(s):
    re.search(" um[^a-z]", s, re.IGNORECASE)


...


if __name__ == "__main__":
    main()
