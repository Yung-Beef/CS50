import re

url = import("URL: ").strip()

username = re.sub(r"^https?://(www\.)?twitter\.com/", "", url)

print(username)


