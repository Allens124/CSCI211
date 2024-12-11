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
        cout << "Enter the midterm grade of the studnet: ";
        cin >> midGrade;
        cout << "Enter the final grade of the student: ";
        cin >> finGrade;
    }
    return 0;
}