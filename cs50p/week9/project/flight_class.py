class Flight:
    def __init__(self):
        self._dep_city = ""
        self._dep_time = 0 # store as a number, h * 60 + m, import convert(s) from watch.py in week7
        self._dep_timezone = 0
        self._dest_city = ""
        self._dest_time = 0 # store as a number, h * 60 + m, import convert(s) from watch.py in week7
        self._dest_timezone = 0
        self._flight_time = 0

    def __str__(self):
        # print out all of the attributes
        return f"\nDeparting {self.dep_city} at {self.dep_time}\nArriving to {self.dest_city} at {self.dest_time}\nFlight time: {self.flight_time}"

    # Depature city
    @property
    def dep_city(self):
        return self._dep_city

    @dep_city.setter
    def dep_city(self, dep_city):
        if not dep_city: # if dep_city == ""
            raise ValueError("Missing city")
        self._dep_city = dep_city

    # Departure time
    @property
    def dep_time(self):
        return self._dep_time

    @dep_time.setter
    def dep_time(self, dep_time):
        if not dep_time: # if dep_time == ""
            raise ValueError("Missing time")
        self._dep_time = dep_time

    # Departure timezone
    @property
    def dep_timezone(self):
        return self._dep_timezone

    @dep_timezone.setter
    def dep_timezone(self, dep_timezone):
        if not dep_timezone: # if dep_timezone == ""
            raise ValueError("Missing timezone")
        self._dep_timezone = dep_timezone

    # Destination city
    @property
    def dest_city(self):
        return self._dest_city

    @dest_city.setter
    def dest_city(self, dest_city):
        if not dest_city: # if dest_city == ""
            raise ValueError("Missing city")
        self._dest_city = dest_city

    # Arrival time
    @property
    def dest_time(self):
        return self._dest_time

    @dest_time.setter
    def dest_time(self, dest_time):
        if not dest_time: # if dest_time == ""
            raise ValueError("Missing time")
        self._dest_time = dest_time

    # Destination timezone
    @property
    def dest_timezone(self):
        return self._dest_timezone

    @dest_timezone.setter
    def dest_timezone(self, dest_timezone):
        if not dest_timezone: # if dest_timezone == ""
            raise ValueError("Missing timezone")
        self._dest_timezone = dest_timezone

    # Flight time
    @property
    def flight_time(self):
        return self._flight_time

    @flight_time.setter
    def flight_time(self, dep_time, dep_timezone, dest_time, dest_timezone):
        dep_updated = dep_time - (dep_timezone * 60)
        dest_updated = dest_time - (dest_timezone * 60)
        self._flight_time = dest_updated - dep_updated

