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
        if len(old_date) <= 10:
            month, day, year = old_date.split(sep="/")
        else:
            month_name, day, year = old_date.split(sep=" ")
            day = day.removesuffix(",")
            month = months.index(month_name) + 1
        if (int(month) <= 12) and (int(day) <= 31):
            break
    except ValueError:
        pass

month = str(month)
if len(month) < 2:
    month = month.zfill(2)
if len(day) < 2:
    day = day.zfill(2)

print(f"{year}-{month}-{day}")








