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
    Patient* patients[3];
    patients[0] = new Patient("John Doe", 30);
    patients[1] = new Patient("Jane Smith", 25);
    patients[2] = new Patient("Alice Johnson", 40);

    cout << "Patient Information:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "\nPatient " << i + 1 << ":" << endl;
        patients[i]->displayDetails();
    }

    // Dynamically allocate a Room object
    Room* room1 = new Room(101, "ICU");
    cout << "\nRoom Information:" << endl;
    room1->displayRoomInfo();

    // Deallocate memory to avoid memory leaks
    for (int i = 0; i < 3; ++i) {
        delete patients[i];
    }
    delete room1;

    return 0;
}
