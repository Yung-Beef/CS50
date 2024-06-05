import json
import requests

response = requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")
response = response.json()



currencies = response[list(response)[3]]
USD = currencies["USD"]
price = USD["rate_float"]
print(price)
