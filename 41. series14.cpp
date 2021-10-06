#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n1, n2, n3, a=1, b=3, c=4, sum=0;

    cout << "Enter the value of n1, n2 and n3: ";
    cin >> n1 >> n2 >> n3;

    //1*3*4 + 2*5*6 + 3*7*8 + ......+n1*n2*n3
    while(a<n1 && b<n2 && c<n3)
    {
        cout << a << "*" << b << "*" << c  << " + ";
        a++;
        b += 2;
        c++;
    }
    cout << n1 << "*" << n2 << "*" << n3;

    //1*3*4 + 2*5*6 + 3*7*8 + ......+n1*n2*n3 = sum
    while(a<=n1 && b<=n2 && c<=n3)
    {
        sum += (a*b*c);
        a++;
        b += 2;
        c++;
    }

    cout  << endl << endl << "Summation: " << sum;

    getch();
}






