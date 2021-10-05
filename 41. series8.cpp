#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, mul=1;

    cout << "Enter the last number: ";
    cin >> n;

    //1X2X3X.....Xn
    for(int i=1; i<=n-1; i++){
        cout << i << " X ";
    }
    cout << n;

    cout << endl << endl;

    //1X2X3X.....Xn = mul
    for(int i=1; i<=n; i++){
        mul *= i;
    }
    cout << "The Multiplication of " << n << " numbers is: " << mul;

    getch();
}



