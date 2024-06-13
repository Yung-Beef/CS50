import re
import sys


def main():
    try:
        print(parse(input("HTML: ")))
    except AttributeError:
        print("None")

def parse(s):
    url = re.search(r'src="(https?://(?:www\.)?youtube\.com/embed/\w+)"', s)

    updated = re.sub(r"www\.youtube\.com", r"youtu.be", url.group(1))

    return updated

if __name__ == "__main__":
    main()
