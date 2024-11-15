#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int cNum, cSize, score;
    double avg = 0, above = 0;
    cout << "Enter the number of classes: ";
    cin >> cNum;
    while (cNum < 1)
    {
        cout << "Invalid input! Try again: ";
        cin >> cNum;
    }
    vector< vector <int> > v(cNum);
    for (int i = 0; i < cNum; i++)
    {
        cout << "Enter the number of students in class " << i+1 << ": ";
        cin >> cSize;
        while (cSize < 1)
        {
            cout << "Invalid input! Try again: ";
            cin >> cSize;
        }
        for (int j = 0; j < cSize; j++)
        {
            cout << "Enter the score of student " << j+1 << ": ";
            cin >> score;
            while (score < 0)
            {
                cout << "Invalid input! Try again: ";
                cin >> score;
            }
            v[i].push_back(score);
        }
    }
    for (int i = 0; i < cNum; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            avg += v[i][j];
        }
        avg = avg/v[i].size();
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] > avg)
            {
                above++;
            }
        }
        cout << setprecision(5) << 100*above/v[i].size() << "%" << endl;
        avg = 0;
        above = 0;
    }
    return 0;
}