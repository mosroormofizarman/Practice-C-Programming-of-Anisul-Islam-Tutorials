#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int marks;

    cout << "Enter your exam score: ";
    cin >> marks;

    if(marks>100 || marks<0)
        cout << "Invalid Marks";
    else if(marks>=80)
        cout << "You got A+";
    else if(marks>=70)
        cout << "You got A";
    else if(marks>=60)
        cout << "You got A-";
    else if(marks>=50)
        cout << "You got B";
    else if(marks>=40)
        cout << "You got C";
    else if(marks>=33)
        cout << "You got D";
    else
       cout << "Fail" << endl;
       cout << "Best of luck for next time";

    getch();
}

