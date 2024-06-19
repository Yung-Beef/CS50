from datetime import timedelta, datetime, timezone

year = 1998
month = 12
day = 10
hour = 10
minute = 35



fuck = datetime(year, month, day, hour=hour, minute=minute, tzinfo=timezone(timedelta(hours=-4)))

print(fuck)
