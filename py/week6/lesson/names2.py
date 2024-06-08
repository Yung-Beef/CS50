with open("names.txt") as file:
    for line in sorted(file):
        print("Hello,", line.rstrip())






# with open("names.txt", "r") as file:
    # for line in file:
    #     print("Hello,", line.rstrip())
