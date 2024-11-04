#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    string name;
    int age;

public:
    void setDetails(string name, int age) {
        this->name = name;
        this->age = age;
    }

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
    void setRoom(int roomNumber, string roomType) {
        this->roomNumber = roomNumber;
        this->roomType = roomType;
    }

    void displayRoomInfo() const {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Room Type: " << roomType << endl;
    }
};

int main() {
    Patient patient1;
    patient1.setDetails("John Doe", 30);

    Room room1;
    room1.setRoom(101, "ICU");

    cout << "Patient Information:" << endl;
    patient1.displayDetails();
    
    cout << "\nRoom Information:" << endl;
    room1.displayRoomInfo();

    return 0;
}
