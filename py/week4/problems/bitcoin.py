import json
import requests

response = requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")

price = response.json()["bpi"]["USD"]["rate_float"]




