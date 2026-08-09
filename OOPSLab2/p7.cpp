#include <iostream>
using namespace std;

class MovieTicket
{
private:
    string movieName;
    float ticketPrice;
    int numberOfTickets;

public:
    void input()
    {
        cout << "Enter Movie Name: ";
        cin >> movieName;

        cout << "Enter Ticket Price: ";
        cin >> ticketPrice;

        cout << "Enter Number of Tickets: ";
        cin >> numberOfTickets;
    }

    float totalCost()
    {
        return ticketPrice * numberOfTickets;
    }

    void display()
    {
        cout << "\nBooking Summary" << endl;
        cout << "Movie Name = " << movieName << endl;
        cout << "Ticket Price = " << ticketPrice << endl;
        cout << "Number of Tickets = " << numberOfTickets << endl;
        cout << "Total Cost = " << totalCost() << endl;
    }
};

int main()
{
    MovieTicket m;

    m.input();
    m.display();

    return 0;
}