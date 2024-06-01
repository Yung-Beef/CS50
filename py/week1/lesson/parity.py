def main():
    x = int(input("What's X? "))
    if iseven(x):
        print("Even")
    else:
        print("Odd")

def iseven(n):
    return n % 2 == 0
    #return True if n % 2 == 0 else False

main()




