#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, count=0;
    cout << "Enter any positive number: ";
    cin >> num;

    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }

    if(count==0)
        cout << num << " is a prime number.";
    else
        cout << num << " is not a prime number.";

    getch();
}

