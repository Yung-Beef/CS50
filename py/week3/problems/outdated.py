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
        if (int(month) <= 12) and (int(day) <= 31):
            break
        month = int(month)
        day = int(day)
        year = int(year)
    except ValueError:
        pass



print(f"{year}-{month:02}-{day:02}")








