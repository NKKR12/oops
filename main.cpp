#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    virtual void displayDetails() const = 0;
};

class Patient : public Person {
private:
    string name;
    int age;
    static int patientCount;

public:
    Patient() : name("Unknown"), age(0) {
        ++patientCount;
    }

    Patient(const string& name, int age) : name(name), age(age) {
        ++patientCount;
    }

    ~Patient() {
        --patientCount;
    }

    void displayDetails() const override {
        cout << "Patient Name: " << name << endl;
        cout << "Patient Age: " << age << endl;
    }

    static int getPatientCount() {
        return patientCount;
    }

    string getName() const {
        return name;
    }

    void setName(const string& newName) {
        name = newName;
    }

    int getAge() const {
        return age;
    }

    void setAge(int newAge) {
        if (newAge > 0) {
            age = newAge;
        }
    }
};

int Patient::patientCount = 0;

class Room : public Person {
private:
    int roomNumber;
    string roomType;

public:
    Room() : roomNumber(0), roomType("Not Assigned") {}

    Room(int roomNumber, const string& roomType) : roomNumber(roomNumber), roomType(roomType) {}

    void displayDetails() const override {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Room Type: " << roomType << endl;
    }

    int getRoomNumber() const {
        return roomNumber;
    }

    void setRoomNumber(int newRoomNumber) {
        if (newRoomNumber > 0) {
            roomNumber = newRoomNumber;
        }
    }

    string getRoomType() const {
        return roomType;
    }

    void setRoomType(const string& newRoomType) {
        roomType = newRoomType;
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
    room1->displayDetails();

    for (int i = 0; i < 3; ++i) {
        delete patients[i];
    }
    delete room1;

    cout << "\nTotal Patients after deletion: " << Patient::getPatientCount() << endl;

    return 0;
}
