#include <iostream>
using namespace std;

class MobileRecharge
{
private:
    string mobileNumber;
    string customerName;
    float balance;

public:
    void input()
    {
        cout << "Enter Mobile Number: ";
        cin >> mobileNumber;

        cout << "Enter Customer Name: ";
        cin >> customerName;

        cout << "Enter Current Balance: ";
        cin >> balance;
    }

    void recharge()
    {
        float amount;
        cout << "Enter Recharge Amount: ";
        cin >> amount;

        balance += amount;
    }

    void deduct()
    {
        float plan;

        cout << "Enter Recharge Plan Cost: ";
        cin >> plan;

        if (plan <= balance)
        {
            balance -= plan;
            cout << "Recharge Successful!\n";
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }

    void display()
    {
        cout << "Updated Balance = " << balance << endl;
    }
};

int main()
{
    MobileRecharge m;

    m.input();
    m.recharge();
    m.deduct();
    m.display();

    return 0;
}