#prompt for name, keep going until ctrl d
names = []

while True:
    try:
        names.append(input("Name: "))
    except EOFError:
        break

#create a string with all of the names and commas and stuff
phrase = names[0]

if len(names) == 2:
    phrase = (phrase + " and " + names[1])
elif len(names) > 2:
    #loop for each name and concatenate
    for name in names[1:-1]:
        phrase = (phrase + ", " + name)
    phrase = (phrase + ", and " + names[len(names)])

#print out adieu shit plus the entire string of names that i already made
print(f"Adieu, adieu, to {phrase}")
