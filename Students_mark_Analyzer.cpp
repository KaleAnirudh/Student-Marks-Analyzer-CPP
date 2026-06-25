#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int num_students;

    while (1)
    {
        cout << "Enter number of students : ";
        cin >> num_students;
        if (num_students <= 0)
        {
            cout << "Number of students must be greater than 0\n";
            cout << "Try again\n";
        }
        else
            break;
    }
    vector<int> marks(num_students);

    for (int i = 0; i < num_students; i++)
    {
        while (1)
        {
            cout << "Enter marks of student-" << i + 1 << " : ";
            cin >> marks[i];
            if (marks[i] < 0 || marks[i] > 100)
            {
                cout << "Invalid marks! Marks must be between 0 to 100\nEnter marks again: ";
                continue;
            }
            else
                break;
        }
    }

    int sum = 0, highest = INT_MIN, lowest = INT_MAX, pass = 0, fail = 0;
    float average;

    for (int i = 0; i < num_students; i++)
    {
        sum = sum + marks[i];
        if (marks[i] > highest)
            highest = marks[i];
        if (marks[i] < lowest)
            lowest = marks[i];
        if (marks[i] >= 70)
            pass++;
        else
            fail++;
    }
    average = (float)sum / num_students;

    cout << "=====Students Marks Report========\n";
    cout << "Average : " << average << endl;
    cout << "Highest : " << highest << endl;
    cout << "Lowest : " << lowest << endl;
    cout << "Passed : " << pass << endl;
    cout << "Failed : " << fail << endl;
    return 0;
}