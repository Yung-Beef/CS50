import sys

if len(sys.argv) < 2:
    sys.exit("Too few arguments")

for arg in sys.argv[1:]: #starts at position 1 and goes to the end (end omitted - defaults to the end) [1:-1] would omit the last value
    print("Hello, my name is", arg)



# if len(sys.argv) < 2:
#     sys.exit("Too few arguments")
# elif len(sys.argv) > 2:
#     sys.exit("Too many arguments")

# print("Hello, my name is", sys.argv[1])

# if len(sys.argv) < 2:
#     print("Too few arguments")
# elif len(sys.argv) > 2:
#     print("Too many arguments")
# else:
#     print("Hello, my name is", sys.argv[1])

# try:
#     print("Hello, my name is", sys.argv[1])
# except IndexError:
#     print("Too few arguments")
