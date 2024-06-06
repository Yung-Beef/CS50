def main():
    ...


def convert(fraction):
    #gets a valid user input
    while True:
        try:
            string = input("Fraction: ").split(sep="/")
            x = int(string[0])
            y = int(string[1])
            if x <= y:
                break
            else:
                continue
        except ValueError:
            pass
        except ZeroDivisionError:
            pass

    percent = round(float(x / y) * 100)
    return percent


def gauge(percentage):
    ...


if __name__ == "__main__":
    main()
