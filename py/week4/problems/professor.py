import random


def main():
    ...


def get_level():
    while True:
        try:
            n = int(input("Level: "))
            if 1 <= n <= 3:
                return n
        except ValueError:
            pass

def generate_integer(level):
    problems = []
    for _ in range(9):
        problems[_] = [random(), random()]



if __name__ == "__main__":
    main()
