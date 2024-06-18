class Flight:
    def __init__(self):
        self._dep_city = ""
        self._dep_time = 0 # store as a number, h * 60 + m, import convert(s) from watch.py in week7
        self._dest_city = ""
        self._dest_time = 0 # store as a number, h * 60 + m, import convert(s) from watch.py in week7
        self._flight_time = 0

    def __str__(self):
        # print out all of the attributes



    def check_flight_time(self, self.dep_time, self.dest_time):


    @property
    def dep_city(self):
        return self._dep_city

    @property
    def dep_time(self):
        return self._dep_time

    @property
    def dest_city(self):
        return self._dest_city

    @property
    def dest_time(self):
        return self._dest_time

    @property
    def flight_time(self):
        return self._flight_time

