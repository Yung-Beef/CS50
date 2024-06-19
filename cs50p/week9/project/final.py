'''
Total Flying Time Calculator
User inputs a number of flights
User then inputs a departure city, date, time, and timezone, and the same for a destination city
User can then enter another flight
Program prints out each flight's time, and the overall total flight time at the end
Flight data is stored in Flight class objects
'''
from flight_class import Flight
from datetime_convert import convert_date, convert_time
from datetime import datetime, timedelta

def main():
    while True:
        try:
            no_of_flights = int(input("How many flights do you have? "))
            break
        except ValueError:
            continue
    flights = []
    flight_times = []
    total_seconds = 0

    for _ in range(no_of_flights):
        # Create each flight object
        flights.append(Flight())
        # Get data for each flight
        flight_times.append(flight_info(flights[_], _ + 1))
        # Add up the times for all the flights
        total_seconds = total_seconds + flight_times[_]

    flight_time = str(timedelta(seconds=total_seconds))
    print(f"Total flight time: {flight_time}")


# Collects the needed info for a flight, passing in the object for that flight and which flight it is in their list
def flight_info(flight, n):
        print(f"\nFlight {n}")

        ## Departure
        flight.dep_city = input("Departure city: ")
        # Ensure correct timezone input
        while True:
            try:
                flight.dep_timezone = int(input("UTC timezone of departure city: "))
                if -12 <= flight.dep_timezone <= 14:
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
                print("Please input a correct time format, such as 11:14 PM")
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
        print(f"Flight {n} time: {time}")
        return time.seconds


if __name__ == "__main__":
    main()
