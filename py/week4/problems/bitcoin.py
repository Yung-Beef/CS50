import json
import requests

response = requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")
response = response.json()



price = response[list(response)[3]]
print(price)
