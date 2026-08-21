#include <iostream>
using namespace std;

class PrinterManager;

class Printer
{
private:
    string printerName;
    int pagesPrinted;
    int inkLevel;
    bool powerStatus;

public:
    Printer()
    {
        printerName = "HP";
        pagesPrinted = 100;
        inkLevel = 80;
        powerStatus = false;
    }

    friend class PrinterManager;
};

class PrinterManager
{
public:
    void display(Printer &p)
    {
        cout << "\n--- Printer Information ---\n";
        cout << "Printer Name: " << p.printerName << endl;
        cout << "Pages Printed: " << p.pagesPrinted << endl;
        cout << "Ink Level: " << p.inkLevel << "%" << endl;
        cout << "Power: " << (p.powerStatus ? "ON" : "OFF");
    }

    void turnOn(Printer &p)
    {
        p.powerStatus = true;
        cout << "\nPrinter turned ON";
    }

    void turnOff(Printer &p)
    {
        p.powerStatus = false;
        cout << "\nPrinter turned OFF";
    }

    void checkInk(Printer &p)
    {
        cout << "\nInk Level: " << p.inkLevel << "%";
    }

    void resetPages(Printer &p)
    {
        p.pagesPrinted = 0;
        cout << "\nPage count reset";
    }
};

int main()
{
    Printer p;
    PrinterManager m;

    m.display(p);
    m.turnOn(p);
    m.checkInk(p);
    m.resetPages(p);
    m.display(p);
    m.turnOff(p);

    return 0;
}