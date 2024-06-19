from datetime import tzinfo, datetime

a = datetime.today()
print(tzinfo.utcoffset(a))
