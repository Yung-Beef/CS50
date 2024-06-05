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

while True:
    if len(old_date) <= 10:
        month, day, year = old_date.split(sep="/")
    else:
        month_name, day, year = old_date.split(sep=" ")
        day = day.removesuffix(",")
        counter = 1
        for _ in months:
            if month_name == _:
                month = counter
            else:
                counter += 1
    if (int(month) <= 12) and (int(day) <= 31):
        break


if len(month) < 2:
    month = month.zfill(2)
if len(day) < 2:
    day = day.zfill(2)

print(f"{year}-{month}-{day}")








