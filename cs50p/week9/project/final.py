'''
Total Flying Time Calculator
User inputs a departure city and time and a destination city and time
User can then enter another flight
Loop repeats until the user breaks it via keyboard input
Program prints out each flight with it's locations, departure/arrival times, and flight time, and the overall total flight time at the end
Flight data is stored in Flight class objects
'''
from flight import Flight
from time_convert import convert

def main():
    no_of_flights = int(input("How many flights do you have? "))
    flights = []
    for _ in range(no_of_flights):
        flights.append(Flight())
        flight_info(flights[_], _ + 1)
        print(flights[_])

    # TODO: loop through the objects and add up the flight time
    # create a function that accepts the list of flights and returns the total time


# Collects the needed info for a flight, passing in the object for that light and which flight it is in their list
def flight_info(flight, n):
        print(f"Flight {n}")
        flight.dep_city = input("Departure city: ")
        while True:
            try:
                flight.dep_timezone = int(input("UTC timezone of departure city: "))
                break
            except ValueError:
                continue
        flight.dep_time = convert(input("Time of departure: "))
        flight.dest_city = input("Destination: ")
        while True:
            try:
                flight.dest_timezone = int(input("UTC timezone of destination: "))
                break
            except ValueError:
                continue
        flight.dest_time = convert(input("Arrival time: "))
        flight.flight_time()

if __name__ == "__main__":
    main()
