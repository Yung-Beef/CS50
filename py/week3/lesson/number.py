def main():
    x = get_int()
    print(f"X is {x}")

def get_int():
    while True:
        try:
            return int(input("What's X? "))
        except ValueError:
            print("X is not an integer")

main()
