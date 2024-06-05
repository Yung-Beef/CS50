import random


def main():
    ...


problems = []
    for _ in range(9):
        problems[_] = [randint(1, (10 ^ n)), randint(1, (10 ^ n))]


def get_level():
    while True:
        try:
            n = int(input("Level: "))
            if 1 <= n <= 3:
                return n
        except ValueError:
            pass

def generate_integer(level):
    try:
        return randint(1, (10 ^ n))
    except ValueError if :



if __name__ == "__main__":
    main()
