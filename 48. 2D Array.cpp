#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int rows, cols;

    cout << "How many rows you want?    ";
    cin >> rows;

    cout << "How many columns you want?    ";
    cin >> cols;

    int arr[rows][cols];

    for(int i=0; i<=rows-1; i++)
    {
        for(int j=0; j<=cols-1; j++)
        {
            cout << "A[" << i << "][" << j <<"] = ";
            cin >> arr[i][j];
        }
    }
    cout << "Matrix A: " << endl;
    for(int i=0; i<=rows-1; i++)
    {
        for(int j=0; j<=cols-1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    getch();
}

