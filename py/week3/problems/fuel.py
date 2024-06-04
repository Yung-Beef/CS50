def main():
    #gets the percent to print out
    percent = divide()
    if percent <= 1:
            print("E")
    elif percent >= 99:
            print("F")
    else:
            print(f"{percent}%")

def divide():
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

main()
