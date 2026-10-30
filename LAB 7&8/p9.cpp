#include <iostream>
using namespace std;

class BackupPolicy {
public:
    virtual double calculateStorage(double dataSize) {
        return 0;
    }
};

class FullBackup : public BackupPolicy {
public:
    double calculateStorage(double dataSize) override {
        return dataSize;
    }
};

class IncrementalBackup : public BackupPolicy {
public:
    double calculateStorage(double dataSize) override {
        return (dataSize * 0.25) + 50;
    }
};

int main() {
    double dataSize;

    cout << "Enter data size in MB: ";
    cin >> dataSize;

    FullBackup full;
    IncrementalBackup incremental;

    BackupPolicy *ptr;

    ptr = &full;

    cout << "\nFull Backup Storage: "
         << ptr->calculateStorage(dataSize)
         << " MB" << endl;

    ptr = &incremental;

    cout << "Incremental Backup Storage: "
         << ptr->calculateStorage(dataSize)
         << " MB" << endl;

    return 0;
}