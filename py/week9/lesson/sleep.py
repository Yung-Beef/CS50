def main():
    n = int(input("What's N? "))
    for s in sheep(n):
        print(s)


def sheep(n):
    flock = []
    for i in range(n):
        flock.append("Sheep" * i)
    return flock

if __name__ == "__main__":
    main()
