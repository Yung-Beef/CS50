import convert from watch

class Flight:
    def __init__(self):
        self.dep_city = ""
        self.dep_time = 0 # store as a number, h * 60 + m, import convert(s) from watch.py in week7
        self.dest_city = ""
        self.dest_time = 0 # store as a number, h * 60 + m, import convert(s) from watch.py in week7
        self.flight_time = 0


    def __str__(self):
        # print out all of the attributes
