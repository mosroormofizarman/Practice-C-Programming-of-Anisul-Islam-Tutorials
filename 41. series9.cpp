#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
    int n, mul=1;

    cout << "Enter the value of n: ";
    cin >> n;

    //1^2X2^2X3^2X.....Xn^2
    for(int i=1; i<=n-1; i++){
        cout << i << "^2" << " X ";
    }
    cout << n << "^2";

    cout << endl << endl;

    //1^2X2^2X3^2X.....Xn^2 = mul
    for(int i=1; i<=n; i++){
        mul *= pow(i,2);
    }
    cout << "The Multiplication of " << n << "^2" << " numbers is: " << mul;

    getch();
}




