#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, temp, rem, sum=0;

    cout << "Enter an integer number: ";
    cin >> num;

    temp = num;

    while(temp!=0)
    {
        rem = temp%10;
        sum = sum*10 + rem;
        temp = temp/10;
    }

    cout << "The reverse number of " << num << " is: " << sum;

    getch();
}



