def main():
    string = input("Fraction: ").split(sep="/")
    x = int(string[0])
    y = int(string[1])
    tank(x, y)

def tank(x, y):
    percent = round(float(x / y) * 100)

    while True:
        try:
            if percent <= 1:
                print("E")
            elif percent >= 99:
                print("F")
            else:
                print(percent)
        except ValueError:
            pass
        except ZeroDivisionError:
            pass






#print(percent)

main()
