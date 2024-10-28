from ride import Ride, RideRequest, RideMatching, RideSharing
from user import Rider, Driver
from vehicle import Car, Bike

preron = RideSharing("Preron")
rahim = Rider("Rahim Uddin", "rahim@gmail.com", 1234, "Mohakhali", 1200)
preron.add_rider(rahim)
kolimuddin = Driver("Kolim Uddin", "kolim@gmail.com", 1256, "Gulshan")
preron.add_driver(kolimuddin)
rahim.request_ride(preron, "Uttara", "car")
kolimuddin.reach_destination(rahim.current_ride)
rahim.show_current_ride()
print(preron)