'''
Total Flying Time Calculator
User inputs a departure city and time and a destination city and time
User can then enter another flight
Loop repeats until the user breaks it via keyboard input
Program prints out each flight with it's locations, departure/arrival times, and flight time, and the overall total flight time at the end
Flight data is stored in Flight class objects
'''
from flight_class import Flight
from datetime_convert import convert_date, convert_time
from datetime import datetime, timedelta

def main():
    no_of_flights = int(input("How many flights do you have? "))
    flights = []
    flight_times = []
    for _ in range(no_of_flights):
        flights.append(Flight())
        flight_times.append(flight_info(flights[_], _ + 1))

    # for _ in range(no_of_flights):
    #     total_time = datetime()
    #     total_time = total_time + flight_times[_]

    # print(total_time)


    # TODO: loop through the objects and add up the flight time
    # create a function that accepts the list of flights and returns the total time


# Collects the needed info for a flight, passing in the object for that flight and which flight it is in their list
def flight_info(flight, n):
        print(f"\nFlight {n}")

        ## Departure
        flight.dep_city = input("Departure city: ")
        # Ensure correct timezone input
        while True:
            try:
                flight.dep_timezone = int(input("UTC timezone of departure city: "))
                break
            except ValueError:
                continue
        # Ensure correct date input
        while True:
            try:
                year, month, day = convert_date.convert(input("Date of departure (MM/DD/YYYY): "))
                break
            except ValueError:
                continue
        # Ensure correct time input
        while True:
            try:
                hour, minute = convert_time.convert(input("Time of departure: "))
                break
            except ValueError:
                print("Please input a correct time format, such as 11:14 PM\n")
                continue

        # Create datetime object for departure
        departure = datetime(year, month, day, hour=hour, minute=minute)
        flight.dep_time = departure - timedelta(hours=flight.dep_timezone)


        ## Destination
        flight.dest_city = input("Destination: ")
        # Ensure correct timezone input
        while True:
            try:
                flight.dest_timezone = int(input("UTC timezone of destination: "))
                break
            except ValueError:
                continue
        # Ensure correct date input
        while True:
            try:
                year, month, day = convert_date.convert(input("Date of arrival (MM/DD/YYYY): "))
                break
            except ValueError:
                continue
        # Ensure correct time input
        while True:
            try:
                hour, minute = convert_time.convert(input("Time of arrival: "))
                break
            except ValueError:
                print("Please input a correct time format, such as 11:14 PM\n")
                continue

        # Create datetime object for destination
        destination = datetime(year, month, day, hour=hour, minute=minute)
        flight.dest_time = destination - timedelta(hours=flight.dest_timezone)

        # Calculates flight time and prints
        time = flight.dest_time - flight.dep_time
        print(f"Flight time: {time}")
        print(time.seconds)
        #return time


if __name__ == "__main__":
    main()
