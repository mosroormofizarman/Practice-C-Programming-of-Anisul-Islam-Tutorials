#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, row, col, value = 0;

    cout << "Enter number of lines: ";
    cin >> n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            value = row%2;
            cout << " " << value;
        }
        cout << endl;
    }


    getch();
}







