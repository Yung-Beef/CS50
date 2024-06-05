import requests
import sys



if len(sys.argv) == 2:
    try:
        n = float(sys.argv[1])
    except ValueError:
        sys.exit("Invalid number")
else:
    sys.exit("Invalid entry")

try:
    response = requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")

    price = response.json()["bpi"]["USD"]["rate_float"]
except requests.RequestException:
    print("Error fetching price")

print(f"{(n * price):}",




