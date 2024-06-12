import re

name = input("What is your name? ").strip()

if matches = re.esarch(r"^(.+), (.+)$)", name):
    name = matches.group(2) + " " + matches.group(1)
    # last = matches.group(1)
    # first = matches.group(2)
    # # last, first = matches.groups()
    # name = f"{first} {last}"

print(f"Hello, {name}")
