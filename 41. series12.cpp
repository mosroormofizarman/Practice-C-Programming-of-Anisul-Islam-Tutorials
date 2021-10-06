#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n1, n2, a=1, b=2, sum=0;

    cout << "Enter the value of n1 and n2: ";
    cin >> n1 >> n2;

    //1*2 + 2*3 + 3*4 + ......+n1*n2
    while(a<n1 && b<n2)
    {
        cout << a << "*" << b  << " + ";
        a++;
        b++;
    }
    cout << n1 << "*" << n2;

    //1*2 + 2*3 + 3*4 + ......+n1*n2 = sum
    while(a<=n1 && b<=n2)
    {
        sum += (a*b);
        a++;
        b++;
    }

    cout  << endl << endl << "Summation: " << sum;

    getch();
}




