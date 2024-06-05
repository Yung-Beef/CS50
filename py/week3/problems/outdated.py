months = [
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
]

old_date = input("Date: ")

if len(old_date) <= 10:
    month, day, year = old_date.split(sep="/")
    print(month)
    print(day)
    print(year)
else:
    month, day, year = old_date.split(sep=" ")
    print(month)
    print(day)
    print(year)








