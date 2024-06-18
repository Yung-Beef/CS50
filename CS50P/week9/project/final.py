'''
Total Flying Time Calculator
User inputs a departure city and time and a destination city and time
User can then enter another destination city and arrival time at that city
Loop repeats until the user breaks it via keyboard input
Program prints out each flight with it's locations, departure/arrival times, and flight time, and the overall total flight time at the end
Flight data is stored in Flight class objects
'''
class Flight:
    def __init__(self):
        self.dep_city = ""
        self.dep_time = 0 # store as a number, h * 60 + m, import convert(s) from watch.py in week7
        self.dest_city = ""
        self.dest_time = 0 # store as a number, h * 60 + m, import convert(s) from watch.py in week7
        self.flight_time = 0


    def __str__(self):
        # print out all of the attributes
