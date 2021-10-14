#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, x, y, sum;

    cout << "How many Fibonacci number you want? ";
    cin >> n;

    int arr[n];

    cout << "First " << n << " Fibonacci numbers are: " << endl;

    if(n==1)
    {
        arr[0] = 0;

        cout << arr[0];
    }
    else
    {
       for(int i=0; i<=n-2; i++)
        {
            x = i;
            y = i+1;
            sum = x+y;
            arr[i] = sum;
            x = y;
            y = sum;
        }

        cout << 0;
        for(int i=0; i<=n-2; i++)
        {
            cout << ",  "<< arr[i];
        }
    }

    getch();
}
