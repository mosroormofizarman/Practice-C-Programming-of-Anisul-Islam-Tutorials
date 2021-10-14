#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter row: ";
    cin >> rows;

    cout << "Enter column: ";
    cin >> cols;

    int arr[rows][cols], trans_arr[cols][rows];

    for(int i=0; i<=rows-1; i++)
    {
        for(int j=0; j<=cols-1; j++)
        {
            cout << "A[" << i << "][" << j <<"] = ";
            cin >> arr[i][j];
        }
    }

    cout << endl << "A = ";
    for(int i=0; i<=rows-1; i++)
    {
        for(int j=0; j<=cols-1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
        cout << "    ";
    }

    for(int i=0; i<=rows-1; i++)
    {
        for(int j=0; j<=cols-1; j++)
        {
            trans_arr[j][i] = arr[i][j];
        }
    }
    cout << endl << "Transpose matrix A = " << endl;
    for(int i=0; i<=cols-1; i++)
    {
        for(int j=0; j<=rows-1; j++)
        {
            cout << trans_arr[i][j] << " ";
        }
        cout << endl;
    }

    getch();
}





