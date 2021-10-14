#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int marks[5];
    int marks_one[5] = {80, 75, 96 ,52 ,33};
    int marks_two[] = {80, 75, 96 ,52 ,33};

    marks[0] = 80,
    marks[1] = 75,
    marks[2] = 96;
    marks[3] = 52,
    marks[4] = 33;

    cout << marks[0] << " ";
    cout << marks[1] << " ";
    cout << marks[2] << " ";
    cout << marks[3] << " ";
    cout << marks[4] << " ";

    cout << endl << endl;

    cout << marks_one[0] << " ";
    cout << marks_one[1] << " ";
    cout << marks_one[2] << " ";
    cout << marks_one[3] << " ";
    cout << marks_one[4] << " ";

    cout << endl << endl;

    for(int i=0; i<=4; i++)
    {
        cout << marks_two[i] << " ";
    }

    getch();

}
