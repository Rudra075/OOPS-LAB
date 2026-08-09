#include <iostream>
using namespace std;

class WaterBill
{
private:
    int consumerNumber;
    string consumerName;
    int consumption;

public:
    void input()
    {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;

        cout << "Enter Consumer Name: ";
        cin >> consumerName;

        cout << "Enter Water Consumption in Litres: ";
        cin >> consumption;
    }

    float calculateBill()
    {
        float bill = 0;

        if (consumption <= 500)
        {
            bill = consumption * 2;
        }
        else if (consumption <= 1000)
        {
            bill = (500 * 2) + ((consumption - 500) * 3);
        }
        else
        {
            bill = (500 * 2) + (500 * 3)
                 + ((consumption - 1000) * 5);
        }

        return bill;
    }

    void display()
    {
        cout << "\nWater Bill" << endl;
        cout << "Consumer Number = " << consumerNumber << endl;
        cout << "Consumer Name = " << consumerName << endl;
        cout << "Water Consumption = " << consumption << " litres" << endl;
        cout << "Total Bill = " << calculateBill() << endl;
    }
};

int main()
{
    WaterBill w;

    w.input();
    w.display();

    return 0;
}