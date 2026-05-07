#include <iostream>
#include <fstream>

using namespace std;

const int NUM_Students = 6;
const int NUM_Subjects = 4;

void Enter_Grades(int Grades[][NUM_Subjects], int students, int subjects);

void Enter_credit_hours(int Credit_hours[], int subjects);

void Display_grades(int Grades[][NUM_Subjects], int students, int subjects);

void Calculate_Grade_points(int Grades[][NUM_Subjects], 
    double Grade_points[][NUM_Subjects], int students, int subjects);

void Calculate_GPA(int Credit_hours[], double GPA[],
    double Grade_points[][NUM_Subjects], int students, int subjects);

void store_grades(int Grades[][NUM_Subjects], int students, int subjects);

void read_grades(int students, int subjects);

void Enter_Grades(int Grades[][NUM_Subjects], int students, int subjects) {
    cout << "Enter grades for each student (0-100):\n";
    for (int i = 0; i < students; i++) {
        cout << "Student " << (i + 1) << ":\n";
        for (int j = 0; j < subjects; j++) {
            cout << "  Subject " << (j + 1) << ": ";
            cin  >> Grades[i][j];
        }
    }
}

void Enter_credit_hours(int Credit_hours[], int subjects) {
    cout << "\nEnter credit hours for each subject (3 or 4):\n";
    for (int j = 0; j < subjects; j++) {
        cout << "  Subject " << (j + 1) << ": ";
        cin  >> Credit_hours[j];
    }
}

void Display_grades(int Grades[][NUM_Subjects], int students, int subjects) {
    cout << "Student\tSubject1\tSubject2\tSubject3\tSubject4\n";
    for (int i = 0; i < students; i++) {
        cout << (i + 1);
        for (int j = 0; j < subjects; j++)
            cout << "\t" << Grades[i][j];
        cout << "\n";
    }
}

void Calculate_Grade_points(int Grades[][NUM_Subjects], double Grade_points[][NUM_Subjects],
    int students, int subjects) {

    for (int i = 0; i < students; i++) {
        for (int j = 0; j < subjects; j++) {
            int g = Grades[i][j];
            if (g >= 95) Grade_points[i][j] = 4.5;
            else if (g >= 90) Grade_points[i][j] = 4.0;
            else if (g >= 85) Grade_points[i][j] = 3.5;
            else if (g >= 80) Grade_points[i][j] = 3.0;
            else if (g >= 75) Grade_points[i][j] = 2.5;
            else if (g >= 70) Grade_points[i][j] = 2.0;
            else if (g >= 65) Grade_points[i][j] = 1.5;
            else Grade_points[i][j] = 0.0;
        }
    }
}

void Calculate_GPA(int Credit_hours[], double GPA[], double Grade_points[][NUM_Subjects],
    int students, int subjects) {

    for (int i = 0; i < students; i++) {
        double totalPoints = 0.0;
        int    totalHours  = 0;
        for (int j = 0; j < subjects; j++) {
            totalPoints += Grade_points[i][j] * Credit_hours[j];
            totalHours  += Credit_hours[j];
        }
        GPA[i] = totalPoints / totalHours;
    }
}

void store_grades(int Grades[][NUM_Subjects], int students, int subjects) {
    ofstream file("grades.txt");
    if (!file){cout << "Error opening file!\n"; return;}
    for (int i = 0; i < students; i++) {
        for (int j = 0; j < subjects; j++) {
            file << Grades[i][j];
            if (j < subjects - 1) file << " ";
        }
        file << "\n";
    }
    file.close();
    cout << "Grades saved to grades.txt\n";
}

void read_grades(int students, int subjects) {
    ifstream file("grades.txt");
    if (!file) { cout << "Error opening file!\n"; return; }
    int Grades[NUM_Students][NUM_Subjects];
    for (int i = 0; i < students; i++)
        for (int j = 0; j < subjects; j++)
            file >> Grades[i][j];
    file.close();
    cout << "\nGrades read from grades.txt:\n";
    Display_grades(Grades, students, subjects);
}

int main() {
    int Grades[NUM_Students][NUM_Subjects];
    int Credit_hours[NUM_Subjects];
    double Grade_points[NUM_Students][NUM_Subjects];
    double GPA[NUM_Students];

    Enter_Grades(Grades, NUM_Students, NUM_Subjects);
    Enter_credit_hours(Credit_hours, NUM_Subjects);

    cout << "\n Grades Table \n";
    Display_grades(Grades, NUM_Students, NUM_Subjects);

    Calculate_Grade_points(Grades, Grade_points, NUM_Students, NUM_Subjects);
    Calculate_GPA(Credit_hours, GPA, Grade_points, NUM_Students, NUM_Subjects);

    cout << "\n GPA Results \n";
    for (int i = 0; i < NUM_Students; i++)
        cout << "Student " << (i + 1) << ": " << GPA[i] << "\n";

    store_grades(Grades, NUM_Students, NUM_Subjects);
    read_grades(NUM_Students, NUM_Subjects);

    return 0;
}
