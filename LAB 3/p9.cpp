#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

public:
    void input()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Salary: " << salary << endl;
    }

    float getSalary()
    {
        return salary;
    }
};

int main()
{
    int n;
    float total = 0;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee *e = new Employee[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        e[i].input();
    }

    int highest = 0;

    for (int i = 0; i < n; i++)
    {
        total += e[i].getSalary();

        if (e[i].getSalary() > e[highest].getSalary())
            highest = i;
    }

    cout << "\nEmployee with Highest Salary:\n";
    e[highest].display();

    cout << "Average Salary = " << total / n << endl;

    delete[] e;

    return 0;
}