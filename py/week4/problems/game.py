import random
import sys

while True:
    try:
        n = int(input("Level: "))
        if n >= 1:
            break
    except ValueError:
        pass

number = n
if n != 1:
    number = random.randrange(1, n)
print(number)
while True:
    try:
        g = int(input("Guess: "))
        if g >= 1:
            if g < number:
                print("Too small!")
            elif g > number:
                print("Too big!")
            else:
                sys.exit("Just right!")
    except ValueError:
        pass
