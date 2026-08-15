#include <iostream>
#include<string>
using namespace std;

class Product
{
    int id, quantity;
    string name;
    float price;

public:
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> id;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    float cost()
    {
        return price * quantity;
    }

    void display()
    {
        cout << name << " Cost = " << cost() << endl;
    }
};

int main()
{
    int n;
    float total = 0;

    cout << "Enter number of products: ";
    cin >> n;

    Product *p = new Product[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        p[i].input();
    }

    cout << "\nProduct Costs:\n";

    for (int i = 0; i < n; i++)
    {
        p[i].display();
        total += p[i].cost();
    }

    cout << "Overall Inventory Value = " << total << endl;

    delete[] p;

    return 0;
}