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
    double averages[students.size()];
    double overallAvg;
    for (int i = 0; i < students.size(); i++)
    {
        averages[i] = (students[i].mid+students[i].fin)/2;
       overallAvg += averages[i];
    }
    overallAvg /= students.size();
    for (int i = 0; i < students.size(); i++)
    {
        cout << "Student " << i+1 << endl;
        cout << "Average: " << averages[i];
        cout << 
    }
    return 0;
}