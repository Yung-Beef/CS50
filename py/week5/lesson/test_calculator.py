import square from calculator

def main():
    test_square()

def test_square():
    if square(2) != 4:
        print("Error")
    if square(3) != 9:
        print("Error")

if __name__ == "__main__":
    main()
