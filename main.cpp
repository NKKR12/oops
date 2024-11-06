#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    string name;
    int age;

public:
    Patient(const string& name, int age) : name(name), age(age) {}

    void displayDetails() const {
        cout << "Patient Name: " << name << endl;
        cout << "Patient Age: " << age << endl;
    }
};

class Room {
private:
    int roomNumber;
    string roomType;

public:
    Room(int roomNumber, const string& roomType) : roomNumber(roomNumber), roomType(roomType) {}

    void displayRoomInfo() const {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Room Type: " << roomType << endl;
    }
};

int main() {
    Patient patient1("John Doe", 30);
    Room room1(101, "ICU");

    cout << "Patient Information:" << endl;
    patient1.displayDetails();
    
    cout << "\nRoom Information:" << endl;
    room1.displayRoomInfo();

    return 0;
}

