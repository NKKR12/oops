#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    string name;
    int age;
    static int patientCount;
public:
    Patient(const string& name, int age) : name(name), age(age) {
        ++patientCount;
    }

    ~Patient() {
        --patientCount;
    }

    void displayDetails() const {
        cout << "Patient Name: " << name << endl;
        cout << "Patient Age: " << age << endl;
    }

    static int getPatientCount() {
        return patientCount;
    }
};

int Patient::patientCount = 0;

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

    cout << "\nTotal Patients: " << Patient::getPatientCount() << endl;

    Room* room1 = new Room(101, "ICU");
    cout << "\nRoom Information:" << endl;
    room1->displayRoomInfo();

    for (int i = 0; i < 3; ++i) {
        delete patients[i];
    }
    delete room1;

    cout << "\nTotal Patients after deletion: " << Patient::getPatientCount() << endl;

    return 0;
}
