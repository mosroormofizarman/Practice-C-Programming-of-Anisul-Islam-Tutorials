#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, temp, rem, sum=0, count=0;

    cout << "Enter an integer number: ";
    cin >> num;

    temp = num;

    while(temp!=0)
    {
        rem = temp%10; //num=num/10;
        count++; //++count;
        temp = temp/10;
    }
    cout << endl << "The number " << num << " has " << count << " digits.";

    getch();
}



