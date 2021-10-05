#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, sum=0;

    cout << "Enter the last number: ";
    cin >> n;

    //1+2+3+.....+n
    for(int i=1; i<=n-1; i++){
        cout << i << " + ";
    }
    cout << n;

    cout << endl << endl;

    //1+2+3+.....+n = sum
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout << "The Summation of " << n << " numbers is: " << sum;

    getch();
}


