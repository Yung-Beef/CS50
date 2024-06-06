def main():
    #gets a valid user input

    string = input("Fraction: ").split(sep="/")
    print(string)

    percentage = convert(string)

    print(gauge(percentage))


def convert(fraction):
    try:
        x = int(fraction[0])
        y = int(fraction[1])
        if x > y:
             ValueError

        percent = round(float(x / y) * 100)

    except ValueError:
        print("Error")
    except ZeroDivisionError:
        print("Error")

    return percent

def gauge(percentage):
    if percentage <= 1:
            return "E"
    elif percentage >= 99:
            return "F"
    else:
            return f"{percentage}%"


if __name__ == "__main__":
    main()
