from pyfiglet import Figlet
import random
import sys

fonts = figlet.getFonts()

# take command line arguments


# if none entered, set font to random
if len(argv) == 1:
    figlet.setFont(font=(random.choice(fonts)))
# elif 2 entered, check if valid, set font accordingly
elif len(argv) == 3:
    

# else sys.exit with error message
else:
    sys.exit("Error")

# get user input string to print


# print message with font
