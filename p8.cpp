#include <iostream>
using namespace std;

class HostelFee
{
private:
    string studentName;
    int hostelID;
    float monthlyFee;
    int numberOfMonths;
    int delayed;

public:
    void input()
    {
        cout << "Enter Student Name: ";
        cin >> studentName;

        cout << "Enter Hostel ID: ";
        cin >> hostelID;

        cout << "Enter Monthly Fee: ";
        cin >> monthlyFee;

        cout << "Enter Number of Months: ";
        cin >> numberOfMonths;

        cout << "Is payment delayed? (1 = Yes, 0 = No): ";
        cin >> delayed;
    }

    float totalFee()
    {
        float fee;

        fee = monthlyFee * numberOfMonths;

        if (delayed == 1)
        {
            fee = fee + 500;
        }

        return fee;
    }

    void display()
    {
        cout << "\nHostel Fee Details" << endl;
        cout << "Student Name = " << studentName << endl;
        cout << "Hostel ID = " << hostelID << endl;
        cout << "Monthly Fee = " << monthlyFee << endl;
        cout << "Number of Months = " << numberOfMonths << endl;
        cout << "Final Amount Payable = " << totalFee() << endl;
    }
};

int main()
{
    HostelFee h;

    h.input();
    h.display();

    return 0;
}