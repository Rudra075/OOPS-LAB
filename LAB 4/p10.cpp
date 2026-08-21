#include <iostream>
using namespace std;

class AttendanceManager;

class Classroom
{
private:
    string className;
    int totalStudents;
    int presentStudents;
    bool attendanceStatus;

public:
    Classroom()
    {
        className = "CSE-B1";
        totalStudents = 60;
        presentStudents = 0;
        attendanceStatus = false;
    }

    friend class AttendanceManager;
};

class AttendanceManager
{
public:
    void display(Classroom &c)
    {
        cout << "\n--- Classroom Information ---\n";
        cout << "Class Name: " << c.className << endl;
        cout << "Total Students: " << c.totalStudents << endl;
        cout << "Present Students: " << c.presentStudents << endl;

        cout << "Attendance Status: ";

        if (c.attendanceStatus)
            cout << "Completed";
        else
            cout << "Pending";
    }

    void updatePresent(Classroom &c, int p)
    {
        c.presentStudents = p;
    }

    void completeAttendance(Classroom &c)
    {
        c.attendanceStatus = true;
        cout << "\nAttendance marked as completed";
    }

    void checkAttendance(Classroom &c)
    {
        cout << "\nAttendance Status: ";

        if (c.attendanceStatus)
            cout << "Completed";
        else
            cout << "Pending";
    }

    void absentStudents(Classroom &c)
    {
        int absent;

        absent = c.totalStudents - c.presentStudents;

        cout << "\nAbsent Students: " << absent;
    }
};

int main()
{
    Classroom c;
    AttendanceManager m;

    m.updatePresent(c, 52);
    m.completeAttendance(c);
    m.display(c);
    m.checkAttendance(c);
    m.absentStudents(c);

    return 0;
}