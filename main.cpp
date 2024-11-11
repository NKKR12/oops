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
    Patient patients[3];

    patients[0].setDetails("John Doe", 30);
    patients[1].setDetails("Jane Smith", 25);
    patients[2].setDetails("Alice Johnson", 40);

    cout << "Patient Information:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "\nPatient " << i + 1 << ":" << endl;
        patients[i].displayDetails();
    }

    return 0;
}