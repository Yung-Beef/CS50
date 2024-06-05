import random


def main():
    level = get_level()
    score = 0

    for _ in range(10):
        x = generate_integer(level)
        y = generate_integer(level)
        tries = 0

        while True:
            if tries == 3:
                print(f"{x} + {y} = {x + y}")
                break

            try:
                answer = int(input(f"{x} + {y} = "))
                if answer != (x + y):
                    print("EEE")
                    tries += 1
                else:
                    score += 1
                    break
            except ValueError:
                print("EEE")
                tries += 1


    print(score)


def get_level():
    while True:
        try:
            n = int(input("Level: "))
            if 1 <= n <= 3:
                return n
        except ValueError:
            pass


def generate_integer(level):
    return random.randint(1, (10 ** level))


if __name__ == "__main__":
    main()
