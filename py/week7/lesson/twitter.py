import re

url = import("URL: ").strip()

username = re.sub(r"https://twitter.com/", "", url)

print(username)


