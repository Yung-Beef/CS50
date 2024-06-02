x, y, z = input("Expression: ").split(" ")

x = float(x)
z = float(z)

match y:
    case "+":
        print(f"{x + z:.1F}")
    case "-":
        print(f"{x - z:.1F}")
    case "*":
        print(f"{x * z:.1F}")
    case "/":
        print(f"{x / z:.1F}")
#print(f"{z:.2f}")
