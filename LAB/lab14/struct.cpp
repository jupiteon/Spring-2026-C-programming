#include <iostream>
using namespace std;

int main(){
    struct Date {
        int day, month, year;
    };
    struct Student {
        char name[50];
        int id;
        char gender;
        double gpa;
        Date birthday; // nested struct
    };
    Student s1 = {"Sardor", 250471, 'M', 3.4, {2006, 7, 7}};
    Student class1[30];
    class1[0].gpa = 3.75;

    cout<<"Name: "<<s1.name
    <<"\n Id: "<<s1.id
    <<"\n Sex: "<<s1.gender
    <<"\n GPA: "<<s1.gpa
    <<"\n Birthday (D.M.Y): "<<s1.birthday.day<<"."<<s1.birthday.month<<"."<<s1.birthday.year;
    return 0;
}