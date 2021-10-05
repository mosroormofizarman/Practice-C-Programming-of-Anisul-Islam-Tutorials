#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, sum=0;

    cout << "Enter the last number: ";
    cin >> n;

    if(n%2!=0)
    {
        //1+3+5+.....+n
        for(int i=1; i<=n-1; i+=2)
        {
            cout << i << " + ";
        }
        cout << n;

        cout << endl << endl;

        //1+3+5+.....+n = sum
        for(int i=1; i<=n; i+=2)
        {
            sum += i;
        }
        cout << "The Summation of " << n << " numbers is: " << sum;
    }

    else
        cout << "Please input a odd integer number.";

    getch();
}



