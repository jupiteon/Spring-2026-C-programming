#include <iostream>
using namespace std;

int main() {
    double GPA;
    int Absences;
    int Projects;
    double Attendance;

    cout << "GPA: ";
    cin >> GPA;

    cout << "Absences: ";
    cin >> Absences;

    cout << "Projects: ";
    cin >> Projects;

    Attendance = (14.0 - Absences) / 14.0 * 100.0;

    if (
        ((GPA >= 3.5) && (Attendance >= 90) && (Projects >= 3)) ||
        ((GPA >= 3.7) && (Attendance > 80) && (Projects >= 2)) ||
        ((GPA >= 4.0) && (Attendance >= 70) && (Projects >= 1))
       )
    {
        cout << "Eligible";
    }
    else
    {
        cout << "Ineligible";
    }

    return 0;
}
