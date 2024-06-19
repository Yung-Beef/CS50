from datetime import timedelta, datetime, timezone

year = 1998
month = 12
day = 10
hour = 10
minute = 35
tz = -5

td = timedelta(hours=tz)

fuck = datetime(year, month, day, hour=hour, minute=minute)

fuck2 = datetime + td

print(fuck)
print(fuck2)
