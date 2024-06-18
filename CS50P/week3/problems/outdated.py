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

while True:
    old_date = input("Date: ")
    try:
        if "/" in old_date:
            month, day, year = old_date.split(sep="/")
        else:
            month_name, day, year = old_date.split(sep=" ")
            day = day.removesuffix(",")
            month = months.index(month_name) + 1
        month, day, year = int(month), int(day), int(year)
        if (month <= 12) and (day <= 31):
            break
    except ValueError:
        pass

print(f"{year}-{month:02}-{day:02}")








