import json
import requests

response = requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")
response = response.json()

print(json.dumps(response, indent = 2))


price = response[list(response)[3]]["USD"]["rate_float"]
print(price)
