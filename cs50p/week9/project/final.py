'''
Total Flying Time Calculator
User inputs a departure city and time and a destination city and time
User can then enter another flight
Loop repeats until the user breaks it via keyboard input
Program prints out each flight with it's locations, departure/arrival times, and flight time, and the overall total flight time at the end
Flight data is stored in Flight class objects
'''
import flight
from time_convert import convert

def main():
    no_of_flights = int(input("How many flights do you have? "))
    flights = {}
    for i in range(no_of_flights):
        flight_name = f"flight_{i}"
        flights[i] = flight_name
        f"flight_{i}" = Flight()





        # TODO: initialize each flight object


def flight_info(flight): # pass in the flight object
    while True:
        try:
            food = input().upper()
            if food in groceries:
                groceries[food] += 1
            if food not in groceries:
                groceries[food] = 1
        except EOFError:
            break



if __name__ == "__main__":
    main()