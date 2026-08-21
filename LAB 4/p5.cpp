#include <iostream>
using namespace std;

class EventParticipant
{
private:
    string name;
    int age;
    string registrationStatus;

public:
    void getData()
    {
        cout << "Enter participant name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter registration status: ";
        cin >> registrationStatus;
    }

    friend void verifyParticipant(EventParticipant p);
};

void verifyParticipant(EventParticipant p)
{
    cout << "\n--- Participant Details ---\n";
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Registration Status: " << p.registrationStatus << endl;

    if (p.age >= 18 && p.registrationStatus == "active")
        cout << "Result: Eligible";
    else
        cout << "Result: Not Eligible";
}

int main()
{
    EventParticipant p;

    p.getData();
    verifyParticipant(p);

    return 0;
}