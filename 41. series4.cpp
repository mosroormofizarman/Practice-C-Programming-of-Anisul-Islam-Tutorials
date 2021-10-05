#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int initial_number=1, n;
    double sum=0.0;

    cout << "Enter the last number: 1/";
    cin >> n;

    //1+1/2+1/3+1/4+.....+1/n
    cout << initial_number;
    for(int i=2; i<=n; i++){
        cout << " + 1/" << i ;
    }

    cout << endl << endl;

    //1+1/2+1/3+1/4+.....+1/n = sum
    for(double i=1; i<=n; i++){
        sum += initial_number/i;
    }
    cout << "The Summation of 1/" << n << " numbers is: " << sum;

    getch();
}




