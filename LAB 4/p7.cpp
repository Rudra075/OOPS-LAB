#include <iostream>
using namespace std;

class MuseumManager;

class Exhibit
{
private:
    string exhibitName;
    string exhibitID;
    int visitorCount;
    bool displayStatus;

public:
    Exhibit()
    {
        exhibitName = "Ancient Art";
        exhibitID = "E101";
        visitorCount = 0;
        displayStatus = false;
    }

    friend class MuseumManager;
};

class MuseumManager
{
public:
    void display(Exhibit &e)
    {
        cout << "\n--- Exhibit Information ---\n";
        cout << "Exhibit Name: " << e.exhibitName << endl;
        cout << "Exhibit ID: " << e.exhibitID << endl;
        cout << "Visitor Count: " << e.visitorCount << endl;
        cout << "Display Status: "
             << (e.displayStatus ? "Open" : "Closed");
    }

    void addVisitors(Exhibit &e, int n)
    {
        e.visitorCount += n;
    }

    void resetVisitors(Exhibit &e)
    {
        e.visitorCount = 0;
    }

    void openExhibit(Exhibit &e)
    {
        e.displayStatus = true;
    }

    void closeExhibit(Exhibit &e)
    {
        e.displayStatus = false;
    }
};

int main()
{
    Exhibit e;
    MuseumManager m;

    m.openExhibit(e);
    m.addVisitors(e, 25);
    m.display(e);

    m.closeExhibit(e);

    return 0;
}