while True:
    try:
        string = input("Fraction: ").split(sep="/")
        x = int(string[0])
        y = int(string[1])
        percent = round(float(x / y) * 100)

        break
    except ValueError:
        pass
    except ZeroDivisionError:
        pass


if percent <= 1:
            print("E")
elif percent >= 99:
            print("F")
else:
            print(percent)

#print(percent)
