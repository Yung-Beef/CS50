'''
Total Flying Time Calculator
User inputs a departure city and time and a destination city and time
User can then enter another flight
Loop repeats until the user breaks it via keyboard input
Program prints out each flight with it's locations, departure/arrival times, and flight time, and the overall total flight time at the end
Flight data is stored in Flight class objects
'''
from flight_class import Flight
from datetime_convert import convert_time
from datetime import datetime

def main():
    no_of_flights = int(input("How many flights do you have? "))
    flights = []
    for _ in range(no_of_flights):
        flights.append(Flight())
        flight_info(flights[_], _ + 1)

    # TODO: loop through the objects and add up the flight time
    # create a function that accepts the list of flights and returns the total time


# Collects the needed info for a flight, passing in the object for that flight and which flight it is in their list
def flight_info(flight, n):
        print(f"\nFlight {n}")
        flight.dep_city = input("Departure city: ")
        # Ensure correct input
        while True:
            try:
                flight.dep_timezone = int(input("UTC timezone of departure city: "))
                break
            except ValueError:
                continue

        # while True: # for date


        #time  convert_time.convert(input("Time of departure: "))



        # put date and time into some datetime thing

        # flight.dep_time = datetime

        datetime = datetime()



        flight.dest_city = input("Destination: ")
        # Ensure correct input
        while True:
            try:
                flight.dest_timezone = int(input("UTC timezone of destination: "))
                break
            except ValueError:
                continue
        flight.dest_time = convert_time.convert(input("Arrival time: "))
        # Calculates flight time and prints
        flight.set_flight_time()
        print(flight)

if __name__ == "__main__":
    main()
