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

    @dep_city.setter
    def dep_city(self, dep_city):
        if not dep_city: # if dep_city == ""
            raise ValueError("Missing city")
        self._dep_city = dep_city

    @property
    def dep_time(self):
        return self._dep_time

    @dep_time.setter
    def dep_time(self, dep_time):
        if not dep_time: # if dep_time == ""
            raise ValueError("Missing time")
        self._dep_time = dep_time

    @property
    def dest_city(self):
        return self._dest_city

    @dest_city.setter
    def dest_city(self, dest_city):
        if not dest_city: # if dest_city == ""
            raise ValueError("Missing city")
        self._dest_city = dest_city

    @property
    def dest_time(self):
        return self._dest_time

    @dest_time.setter
    def dest_time(self, dest_time):
        if not dest_time: # if dest_time == ""
            raise ValueError("Missing time")
        self._dest_time = dest_time

    @property
    def flight_time(self):
        return self._flight_time

    @flight_time.setter
    def flight_time(self, flight_time):
        if not flight_time: # if flight_time == ""
            raise ValueError("Missing time")
        self._flight_time = flight_time

