try:
    x = int(input("What's X? "))
    print(f"X is {x}")
except ValueError:
    print("X is not an integer")
