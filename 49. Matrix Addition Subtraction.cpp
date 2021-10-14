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

    if(rows == cols)
    {
        int arr1[rows][cols], arr2[rows][cols], arr3[rows][cols];

        for(int i=0; i<=rows-1; i++)
        {
            for(int j=0; j<=cols-1; j++)
            {
                cout << "A[" << i << "][" << j <<"] = ";
                cin >> arr1[i][j];
            }
        }
        for(int i=0; i<=rows-1; i++)
        {
            for(int j=0; j<=cols-1; j++)
            {
                cout << "B[" << i << "][" << j <<"] = ";
                cin >> arr2[i][j];
            }
        }
        for(int i=0; i<=rows-1; i++)
        {
            for(int j=0; j<=cols-1; j++)
            {
                cout << "C[" << i << "][" << j <<"] = ";
                cin >> arr3[i][j];
            }
        }
        cout << endl << "A = ";
        for(int i=0; i<=rows-1; i++)
        {
            for(int j=0; j<=cols-1; j++)
            {
                cout << arr1[i][j] << " ";
            }
            cout << endl;
            cout << "    ";
        }
        cout << endl;
        cout << "B = ";
        for(int i=0; i<=rows-1; i++)
        {
            for(int j=0; j<=cols-1; j++)
            {
                cout << arr2[i][j] << " ";
            }
            cout << endl;
            cout << "    ";
        }
        cout << endl;
        cout << "C = ";
        for(int i=0; i<=rows-1; i++)
        {
            for(int j=0; j<=cols-1; j++)
            {
                cout << arr3[i][j] << " ";
            }
            cout << endl;
            cout << "    ";
        }
        cout << endl << endl;

        cout << "A + B + C: " << endl;
        for(int i=0; i<=rows-1; i++)
        {
            for(int j=0; j<=cols-1; j++)
            {
                cout << arr1[i][j] + arr2[i][j] + arr3[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout << "A - B - C: " << endl;
        for(int i=0; i<=rows-1; i++)
        {
            for(int j=0; j<=cols-1; j++)
            {
                cout << arr1[i][j] - arr2[i][j] - arr3[i][j] << " ";
            }
            cout << endl;
        }

    }
    else
    {
        cout << endl << "You have to insert equal rows and columns for square matrix.";
    }

    getch();
}



