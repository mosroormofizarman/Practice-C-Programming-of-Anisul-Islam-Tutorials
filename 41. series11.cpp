#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, sum=2, x=2, y=1, temp=0;

    cout << "Enter the last number: ";
    cin >> n;

    //2,1,3,4,7,11,18,29,.....,n
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

    //2,1,3,4,7,11,18,29,.....,n = sum
    cout << "The Summation of Lucas numbers is: " << sum;

    getch();
}




