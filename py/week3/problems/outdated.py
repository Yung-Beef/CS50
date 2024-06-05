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
    month_name, day, year = old_date.split(sep=" ")
    day = day.removesuffix(",")
    counter = 1
    for month in months:
        if month_name == month:
            print(f"{months[month]}")
        else:
            counter += 1


    print(month_name)
    print(day)
    print(year)








