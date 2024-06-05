import random


def main():
    ...

level = get_level()








problems = []
    for _ in range(9):
        problems[_] = [generate_integer(level), generate_integer(level)]


def get_level():
    while True:
        try:
            n = int(input("Level: "))
            if 1 <= n <= 3:
                return n
        except ValueError:
            pass

def generate_integer(level):
    return randint(1, (10 ^ level))



if __name__ == "__main__":
    main()
