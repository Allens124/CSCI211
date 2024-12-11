#include <iostream>
#include <vector>
using namespace std;

struct Student
{
    string name;
    double midGrade;
    double finGrade;
};

int main()
{
    int i = 0;
    string sName;
    double sGrade;
    vector <Student> students;
    while (true)
    {
        cout << "Enter the first name of a student: ";
        cin >> sName;
        students[i].name = sName;
        if (sName == "")
        {
            break;
        }
        cout << "Enter the midterm grade of the student: ";
        cin >> sGrade;
        students[i].midGrade = sGrade;
        cout << "Enter the final grade of the student: ";
        cin >> sGrade;
        students[i].finGrade = sGrade;
        i++;
    }
    return 0;
}