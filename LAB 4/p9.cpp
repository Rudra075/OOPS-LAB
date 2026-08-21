#include <iostream>
using namespace std;

class WalletManager;

class DigitalWallet
{
private:
    string userName;
    float walletBalance;
    string walletStatus;

public:
    DigitalWallet()
    {
        userName = "Rudra";
        walletBalance = 1000;
        walletStatus = "Active";
    }

    friend class WalletManager;
};

class WalletManager
{
public:
    void display(DigitalWallet &w)
    {
        cout << "\n--- Wallet Details ---\n";
        cout << "User Name: " << w.userName << endl;
        cout << "Wallet Balance: Rs. " << w.walletBalance << endl;
        cout << "Wallet Status: " << w.walletStatus;
    }

    void addMoney(DigitalWallet &w, float amount)
    {
        w.walletBalance += amount;
        cout << "\nMoney added successfully";
    }

    void deductMoney(DigitalWallet &w, float amount)
    {
        if (amount <= w.walletBalance)
        {
            w.walletBalance -= amount;
            cout << "\nMoney deducted successfully";
        }
        else
        {
            cout << "\nInsufficient balance";
        }
    }

    void disableWallet(DigitalWallet &w)
    {
        w.walletStatus = "Disabled";
        cout << "\nWallet disabled";
    }
};

int main()
{
    DigitalWallet w;
    WalletManager m;

    m.display(w);

    m.addMoney(w, 500);
    m.deductMoney(w, 200);

    m.display(w);

    m.disableWallet(w);
    m.display(w);

    return 0;
}