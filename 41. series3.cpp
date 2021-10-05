#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float n, sum=0;

    cout << "Enter the last number: ";
    cin >> n;

    //1.5+2.5+3.5+.....+n
    for(float i=1.5; i<=n-1; i++){
        cout << i << " + ";
    }
    cout << n;

    cout << endl << endl;

    //1.5+2.5+3.5+.....+n = sum
    for(float i=1.5; i<=n; i++){
        sum += i;
    }
    cout << "The Summation of " << n << " numbers is: " << sum;

    getch();
}



