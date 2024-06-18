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
        flight_info(flights[_])

    # loop through the objects and add up the flight time




def flight_info(flight): # pass in the flight object
    while True:
        try:
            flight.dep_city = input("Departure city: ")
            flight.dep_timezone = input("Timezone of departure city: ")
            flight.dep_time = input("Time of departure: ")
            flight.dest_city = input("Destination: ")
            flight.dest_timezone = input("Timezone of destination: ")
            flight.dest_time = input("Arrival time: ")
            while True:
                more = input("Do you have another flight to add? Please answer Yes or No.\n")
                if more == "Yes" or "No":
                    break
            if more == "No":
                break
        except EOFError:
            break

if __name__ == "__main__":
    main()
