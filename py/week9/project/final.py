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
        self.dep_time = ""


    def __str__(self):
        # print out all of the attributes
