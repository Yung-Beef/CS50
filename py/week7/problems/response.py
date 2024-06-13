from validator_collection import validators

email = input("Email: ")

try:
    validators.email(email)
    print("Valid")
except ValueError:
    print("Invalid")
