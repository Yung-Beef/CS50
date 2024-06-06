def main():
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

    percentage = convert(string)
    gauge(percentage)


def convert(fraction):
    x = int(fraction[0])
    y = int(fraction[1])

    percent = round(float(x / y) * 100)
    return percent

def gauge(percentage):
    if percentage <= 1:
            return "E"
    elif percentage >= 99:
            return "F"
    else:
            return f"{percent}%"


if __name__ == "__main__":
    main()
