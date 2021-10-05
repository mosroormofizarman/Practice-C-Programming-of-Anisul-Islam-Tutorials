#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, sum=0;

    cout << "Enter the value of n: ";
    cin >> n;

    //1^2+2^2+3^2+.....+n^2
    for(int i=1; i<=n-1; i++){
        cout << i << "^2" << " + ";
    }
    cout << n << "^2";

    cout << endl << endl;

    //1^2+2^2+3^2+.....+n^2 = sum
    for(int i=1; i<=n; i++){
        sum += i*i;
    }
    cout << "The Summation of " << n << "^2" << " numbers is: " << sum;

    getch();
}



