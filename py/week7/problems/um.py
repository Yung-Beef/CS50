import re
import sys


def main():
    print(count(input("Text: ")))


def count(s):
    matches = re.findall(" um[^a-z]", s, re.IGNORECASE)
    print(matches)



if __name__ == "__main__":
    main()
