#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 1. ABSTRACTION & INHERITANCE: Abstract Base Class
class Vehicle {
protected: // Accessible by child classes, but hidden from the outside
    string licensePlate;
    string type;

public:
    Vehicle(string lp, string t) : licensePlate(lp), type(t) {}
    
    // CRITICAL INTERVIEW TIP: Always include a virtual destructor in base classes
    virtual ~Vehicle() {} 
    
    string getLicensePlate() { return licensePlate; }
    string getType() { return type; }
    
    // 2. POLYMORPHISM: Pure virtual function makes this an Abstract Class
    virtual int calculateFee(int hours) = 0; 
};

// Child Class 1
class Bike : public Vehicle {
public:
    Bike(string lp) : Vehicle(lp, "BIKE") {}
    
    // Overriding the base class method
    int calculateFee(int hours) override {
        return hours * 20; // ₹20 per hour
    }
};

// Child Class 2
class Car : public Vehicle {
public:
    Car(string lp) : Vehicle(lp, "CAR") {}
    
    int calculateFee(int hours) override {
        return hours * 50; // ₹50 per hour
    }
};

// 3. ENCAPSULATION: Hiding the state of a parking spot
class ParkingSpot {
private:
    int spotNumber;
    string spotType;
    Vehicle* parkedVehicle; // Must use a pointer to allow Polymorphism

public:
    ParkingSpot(int num, string type) : spotNumber(num), spotType(type), parkedVehicle(nullptr) {}

    // Public Getters
    bool isAvailable() { return parkedVehicle == nullptr; }
    string getSpotType() { return spotType; }
    int getSpotNumber() { return spotNumber; }

    void park(Vehicle* v) {
        parkedVehicle = v;
    }

    Vehicle* removeVehicle() {
        Vehicle* temp = parkedVehicle;
        parkedVehicle = nullptr;
        return temp;
    }
};

// 4. THE SYSTEM
class ParkingLot {
private:
    vector<ParkingSpot> spots;

public:
    ParkingLot(int bikeSpots, int carSpots) {
        // Initialize spots. Using simple integers for spot numbers to keep it clean.
        for(int i = 1; i <= bikeSpots; i++) {
            spots.push_back(ParkingSpot(i, "BIKE"));
        }
        for(int i = 1; i <= carSpots; i++) {
            spots.push_back(ParkingSpot(i + bikeSpots, "CAR"));
        }
    }

    int parkVehicle(Vehicle* v) {
        for(auto& spot : spots) {
            if(spot.isAvailable() && spot.getSpotType() == v->getType()) {
                spot.park(v);
                cout << v->getType() << " (" << v->getLicensePlate() << ") parked at spot " << spot.getSpotNumber() << "\n";
                return spot.getSpotNumber();
            }
        }
        cout << "Sorry, no spots available for " << v->getType() << "\n";
        return -1;
    }

    void leave(int spotNumber, int hours) {
        for(auto& spot : spots) {
            if(spot.getSpotNumber() == spotNumber && !spot.isAvailable()) {
                Vehicle* v = spot.removeVehicle();
                
                // Polymorphism in action: The pointer resolves to the correct child class method
                int fee = v->calculateFee(hours); 
                cout << v->getType() << " (" << v->getLicensePlate() << ") left spot " << spotNumber << ". Fee: Rs " << fee << "\n";
                return;
            }
        }
        cout << "Spot is already empty or invalid.\n";
    }
};

// --- TESTING THE SYSTEM ---
int main() {
    ParkingLot myLot(2, 2); // 2 Bike spots, 2 Car spots
    
    // Instantiate objects
    Car myCar("MH-12-AB-1234");
    Bike myBike("MH-14-XY-9876");
    Car mySecondCar("MH-12-ZZ-0000");
    Car myThirdCar("MH-12-QQ-1111");
    
    // Pass references/pointers to the parking lot
    int carSpot = myLot.parkVehicle(&myCar);
    myLot.parkVehicle(&myBike);
    myLot.parkVehicle(&mySecondCar);
    myLot.parkVehicle(&myThirdCar); // Fails: No car spots left!
    
    // Car leaves after 3 hours
    myLot.leave(carSpot, 3); 
    
    return 0;
}