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
        int fact=1;
        for(int i=rem; i>=1; --i)
        {
            fact *= i;
        }
        sum += fact;
        temp = temp/10;
    }

    if(sum==num)
    {
        cout << endl << num << " is a Strong number.";
    }
    else
    {
        cout << endl << num << " is not a Strong number.";
    }

    getch();
}



