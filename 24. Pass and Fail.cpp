#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int marks;

    cout << "Enter any integer: ";
    cin >> marks;

    if(marks>100 || marks<0)
        cout << "Invalid Marks";
    else if(marks>=33)
        cout << "Pass";
    else
        cout << "Fail";

    getch();
}

