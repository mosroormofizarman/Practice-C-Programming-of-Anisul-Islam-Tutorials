
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

    arr[0] = 0;
    arr[1] = 1;

    for(int i=2; i<=n-1; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    if(n==1)
    {
        cout << arr[0];
    }
    else
    {
       cout << 0;
       for(int i=1; i<=n-1; i++)
        {
            cout << ",  "<< arr[i];
        }
    }

    getch();
}
