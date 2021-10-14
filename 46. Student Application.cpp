#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int student_number, sum=0, max, min;
    float avg;

    cout << "Enter number of Students: ";
    cin >> student_number;

    int students[student_number];

    cout << "Marks of students: " << endl;
    for(int i=0; i<=student_number-1; i++)
    {
      cout << "Marks for Student " << i+1 << " = ";
      cin >> students[i];
      sum = sum + students[i];
    }

    cout << endl << endl;

    cout << "Total Marks: " << sum << endl;

    avg = (float) sum / student_number;

    cout << "Average Marks: " << avg << endl;

    max = students[0];
    min = students[0];

    for(int i=1; i<=student_number-1; i++)
    {
        if(max < students[i])
        {
            max = students[i];
        }
        if(min > students[i])
        {
            min = students[i];
        }
    }

    cout << endl;

    cout << "Maximum Marks: " << max << endl;
    cout << "Minimum Marks: " << min;

    getch();

}



