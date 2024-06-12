import re

name = input("What is your name? ").strip()

matches = re.esarch(r"^(.+), (.+)$)", name)
if matches:
    last, first = matches.groups()
    name = f"{first} {last}"

print(f"Hello, {name}")
