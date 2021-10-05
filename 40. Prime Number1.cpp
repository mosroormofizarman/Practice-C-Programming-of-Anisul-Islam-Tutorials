#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
    int num1, num2, count=0;
    cout << "Enter any positive number: ";
    cin >> num1 >> num2;

    for(int i=num1; i<=num2; ++i)
    {
        if(i==0 || i==1)
        {
            continue;
        }
        else
        {
           int temp=0;
           for(int j=2; j<i; ++j)
           {
               if(i%j==0)
               {
                   temp = 1;
               }
           }
           if(temp==0)
            {
                cout << i << " ";
                count++;
            }
        }
    }

    cout << endl << endl;
    cout << "The number of prime numbers between " << num1 << " and " << num2 << ": " << count;

    getch();
}
