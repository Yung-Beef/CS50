from pyfiglet import Figlet
import random
import sys

figlet = Figlet()
fonts = figlet.getFonts()

# if no CLAs entered, set font to random
if len(sys.argv) == 1:
    figlet.setFont(font=(random.choice(fonts)))

# elif 2 entered, check if valid, set font accordingly
elif len(sys.argv) == 3:
    if (sys.argv[1] != "-f") and (sys.argv[1] != "--font"):
        sys.exit("Error")
    elif sys.argv[2] not in fonts:
        sys.exit("Error")
    else:
        figlet.setFont(font=(sys.argv[2]))

# else sys.exit with error message
else:
    sys.exit("Error")

# get user input string to print
string = input("Input: ")

# print message with font
print(figlet.renderText(string))
