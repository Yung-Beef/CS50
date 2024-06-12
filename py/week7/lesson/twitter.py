import re

url = input("URL: ").strip()

#username = re.sub(r"^https?://(www\.)?twitter\.com/", "", url)
if matches := re.sub(r"^https?://(www\.)?twitter\.com/(.+)$", url, re.IGNORECASE):
    print(f"Username: {matches.group(2)}")


print(username)


