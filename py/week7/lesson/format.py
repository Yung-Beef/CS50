import re

name = input("What is your name? ").strip()

matches = re.esarch(r"^.+, .+$)", name)
