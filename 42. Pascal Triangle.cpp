
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, row, col;

    cout << "Enter number of lines: ";
    cin >> n;

    for(row=1; row<=n; row++)
    {
        int value=1;
        for(col=1; col<=n-row; col++)
        {
            cout << " ";
        }
        for(col=1; col<=row; col++)
        {
            cout << value << " ";
            value = value * (row-col)/col;
        }

        cout << endl;
    }

    getch();
}




















