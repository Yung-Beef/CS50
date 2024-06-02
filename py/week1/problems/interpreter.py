x, y, z = input("Expression: ").split(" ")



match y:
    case "+":
        print(f"{x} + {z}")
    case "-":
        print(x - z)
    case "*":
        print(x * z)
    case "/":
        print(x / z)
