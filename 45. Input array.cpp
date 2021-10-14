#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int marks[5];
    int marks_one[5];

    cin >> marks[0];
    cin >> marks[1];
    cin >> marks[2];
    cin >> marks[3];
    cin >> marks[4];

    cout << endl;

    cout << "Marks are: ";
    cout << marks[0] << " ";
    cout << marks[1] << " ";
    cout << marks[2] << " ";
    cout << marks[3] << " ";
    cout << marks[4] << " ";

    cout << endl << endl;

    cout << "Please input students marks: " << endl;
    for(int i=0; i<=4; i++)
    {
        cout << "Marks for Student " << i+1 << " =  ";
        cin >> marks_one[i];
    }

    cout << endl;

    cout << "Marks are: ";
    for(int i=0; i<=4; i++)
    {
        cout << marks_one[i] << " ";
    }

    getch();

}

