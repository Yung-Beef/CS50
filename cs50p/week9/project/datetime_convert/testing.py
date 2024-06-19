from datetime import tzinfo, datetime

year = 1998
month = 12
day = 10
hour = 10
minute = 35
tz = -4


datetime.datetime(year, month, day, hour=hour, minute=minute, tzinfo=timedelta(hours=tz))
