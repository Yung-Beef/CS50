try:
    x = int(input("What's X? "))
except ValueError:
    print("X is not an integer")

print(f"X is {x}")
