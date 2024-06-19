from datetime import tzinfo
from datetime import datetime

a = datetime.today()
print(tzinfo.utcoffset(a))
