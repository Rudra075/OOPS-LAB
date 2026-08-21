#include <iostream>
using namespace std;

class Camera
{
private:
    string brand;
    string model;
    int megapixels;
    int storage;

public:
    void getData(Camera c)
    {
        cin.ignore();
        cout << "Enter brand: ";
        getline(cin, c.brand);

        cout << "Enter model: ";
        getline(cin, c.model);

        cout << "Enter megapixels: ";
        cin >> megapixels;

        cout << "Enter storage capacity: ";
        cin >> storage;
    }

    friend void compareCamera(Camera c1, Camera c2);
};

void compareCamera(Camera c1, Camera c2)
{
    cout << "\n--- Better Camera ---\n";

    if (c1.megapixels > c2.megapixels)
    {
        cout << "Brand: " << c1.brand << endl;
        cout << "Model: " << c1.model << endl;
        cout << "Megapixels: " << c1.megapixels << endl;
        cout << "Storage: " << c1.storage << " GB";
    }
    else if (c2.megapixels > c1.megapixels)
    {
        cout << "Brand: " << c2.brand << endl;
        cout << "Model: " << c2.model << endl;
        cout << "Megapixels: " << c2.megapixels << endl;
        cout << "Storage: " << c2.storage << " GB";
    }
    else
    {
        if (c1.storage > c2.storage)
        {
            cout << "Brand: " << c1.brand << endl;
            cout << "Model: " << c1.model << endl;
            cout << "Megapixels: " << c1.megapixels << endl;
            cout << "Storage: " << c1.storage << " GB";
        }
        else
        {
            cout << "Brand: " << c2.brand << endl;
            cout << "Model: " << c2.model << endl;
            cout << "Megapixels: " << c2.megapixels << endl;
            cout << "Storage: " << c2.storage << " GB";
        }
    }
}

int main()
{
    Camera c1, c2;

    cout << "Enter Camera 1 details\n";
    c1.getData(c1);

    cout << "\nEnter Camera 2 details\n";
    c2.getData(c2);

    compareCamera(c1, c2);

    return 0;
}