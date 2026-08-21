#include <iostream>
using namespace std;

class UserAccount
{
private:
    string username;
    int loginAttempts;
    string accountStatus;

public:
    void getData()
    {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter login attempts: ";
        cin >> loginAttempts;

        cout << "Enter account status: ";
        cin >> accountStatus;
    }

    friend void checkAccount(UserAccount u);
};

void checkAccount(UserAccount u)
{
    cout << "\n--- Account Details ---\n";
    cout << "Username: " << u.username << endl;
    cout << "Login Attempts: " << u.loginAttempts << endl;

    if (u.loginAttempts >= 3)
        cout << "Account Locked";
    else
        cout << "Account Active";
}

int main()
{
    UserAccount u;

    u.getData();
    checkAccount(u);

    return 0;
}