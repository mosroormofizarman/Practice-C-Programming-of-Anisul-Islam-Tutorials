#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, sum=0, x=0, y=1, temp=0;

    cout << "Enter the last number: ";
    cin >> n;

    //0,1,1,2,3,5,8,13,.....,n
    cout << x;
    for(int i=1; i<=n; ++i)
    {
        if(temp<=n)
        {
          temp = x + y;
          cout << ", " << y;
          sum += y;
          x = y;
          y = temp;
        }
    }

    cout << endl << endl;

    //0,1,1,2,3,5,8,13,.....,n = sum
    cout << "The Summation of Fibonacci numbers is: " << sum;

    getch();
}



