#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, sum=0;

    cout << "Enter the last number: ";
    cin >> n;

    if(n%2==0)
    {
        //2+4+6+.....+n
        for(int i=2; i<=n-1; i+=2)
        {
            cout << i << " + ";
        }
        cout << n;

        cout << endl << endl;

        //2+4+6+.....+n = sum
        for(int i=2; i<=n; i+=2)
        {
            sum += i;
        }
        cout << "The Summation of " << n << " numbers is: " << sum;

    }
        else
            cout << "Please input an even integer number.";

        getch();
}



