from datetime import timedelta, datetime, timezone

year = 1998
month = 12
day = 10
hour = 10
minute = 35
tz = -4

td = timedelta(hours=tz)
tzone = timezone(td)
tzone.fromutc()

fuck = datetime(year, month, day, hour=hour, minute=minute, tzinfo=tzone)

print(fuck)
