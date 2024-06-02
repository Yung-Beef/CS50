def main():
    s = input("What time is it? ")
    time = convert(s)

    if 7 <= time <= 8:
        print("breakfast time")
    if 12 <= time <= 13:
        print("lunch time")
    if 18 <= time <= 19:
        print("dinner time")

def convert(input):
    h, m = input.split(":")
    h = int(h)
    m = int(m)

    #convert minutes into a decimal of an hour
    m = float(m / 60)
    time = float(h + m)
    return time

main()
