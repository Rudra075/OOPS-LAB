#include <iostream>
using namespace std;

class CricketPlayer
{
private:
    string playerName;
    int matchesPlayed;
    int totalRuns;

public:
    void input()
    {
        cout << "Enter Player Name: ";
        cin >> playerName;

        cout << "Enter Matches Played: ";
        cin >> matchesPlayed;

        cout << "Enter Total Runs Scored: ";
        cin >> totalRuns;
    }

    float battingAverage()
    {
        return (float)totalRuns / matchesPlayed;
    }

    void display()
    {
        float average = battingAverage();

        cout << "\nPlayer Report" << endl;
        cout << "Player Name = " << playerName << endl;
        cout << "Matches Played = " << matchesPlayed << endl;
        cout << "Total Runs = " << totalRuns << endl;
        cout << "Batting Average = " << average << endl;

        if (average >= 50)
        {
            cout << "Performance = Excellent" << endl;
        }
        else if (average >= 35)
        {
            cout << "Performance = Good" << endl;
        }
        else if (average >= 20)
        {
            cout << "Performance = Average" << endl;
        }
        else
        {
            cout << "Performance = Poor" << endl;
        }
    }
};

int main()
{
    CricketPlayer p;

    p.input();
    p.display();

    return 0;
}