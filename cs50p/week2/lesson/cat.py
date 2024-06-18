def main():
    meow(get_number())

def get_number():
    while True:
        n = int(input("What's n? "))
        if n > 1:
            return n


def meow(n):
    for _ in range(n):
        print("meow")

main()

#for i in [0, 1, 2]:
#for i in range(3):
#for _ in range(3): #can use _ to represent the variable here if it's never used somewhere else
    #print("meow")

#print("meow\n" * 3, end="")
