#include <iostream>
#include <vector>
using namespace std;

struct Student
{
    string name;
    double mid;
    double fin;
};

int main()
{
    string sName;
    double midGrade, finGrade;
    vector <Student> students;
    while (true)
    {
        cout << "Enter the first name of a student: ";
        cin >> sName;
        if (sName == "")
        {
            break;
        }
        cout << "Enter the midterm grade of the student: ";
        cin >> midGrade;
        cout << "Enter the final grade of the student: ";
        cin >> finGrade;
        Student newStudent;
        newStudent.name = sName;
        newStudent.mid = midGrade;
        newStudent.fin = finGrade;
        students.push_back(newStudent);
    }
    double average = 0, deviation = 0;
    for (int i = 0; i < students.size(); i++)
    {
        average = (students[i].mid+students[i].fin)/2;
    }
    return 0;
}