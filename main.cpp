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
    Patient patients[3] = {
        Patient("John Doe", 30),
        Patient("Jane Smith", 25),
        Patient("Alice Johnson", 40)
    };

    cout << "Patient Information:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "\nPatient " << i + 1 << ":" << endl;
        patients[i].displayDetails();
    }

    Room room1(101, "ICU");
    cout << "\nRoom Information:" << endl;
    room1.displayRoomInfo();

    return 0;
}
