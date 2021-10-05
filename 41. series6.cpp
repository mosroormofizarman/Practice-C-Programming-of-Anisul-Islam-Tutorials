#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
    int n, sum=0;

    cout << "Enter the value of n: ";
    cin >> n;

    //1^5+2^5+3^5+.....+n^5
    for(int i=1; i<=n-1; i++){
        cout << i << "^5" << " + ";
    }
    cout << n << "^5";

    cout << endl << endl;

    //1^5+2^5+3^5+.....+n^5 = sum
    for(int i=1; i<=n; i++){
        sum += pow(i,5);
    }
    cout << "The Summation of " << n << "^5" << " numbers is: " << sum;

    getch();
}




