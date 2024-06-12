import re

name = input("What is your name? ").strip()

matches = re.esarch(r"^(.+), (.+)$)", name)
if matches:
    name = matches.group(2) + " " + matches.group(1)
    # last = matches.group(1)
    # first = matches.group(2)
    # # last, first = matches.groups()
    # name = f"{first} {last}"

print(f"Hello, {name}")
