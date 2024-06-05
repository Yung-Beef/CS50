from pyfiglet import Figlet
import random
import sys

fonts = figlet.getFonts()

# take command line arguments


# if none entered, set font to random
if len(argv) == 1:
    font = random.choice(fonts)

figlet.setFont(font=f)
# elif 2 entered, check if valid, set font accordingly


# else sys.exit with error message


# get user input string to print


# print message with font
