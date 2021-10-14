#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int rows1, cols1, rows2, cols2;

    cout << "First matrix rows:    ";
    cin >> rows1;

    cout << "First matrix columns:    ";
    cin >> cols1;

    cout << "Second matrix rows:    ";
    cin >> rows2;

    cout << "Second matrix columns:    ";
    cin >> cols2;

    while(cols1!=rows2)
    {
        cout << endl << "Error!!! First matrix column and second matrix row must be equal.";

        cout << "First matrix rows:    ";
        cin >> rows1;

        cout << "First matrix columns:    ";
        cin >> cols1;

        cout << "Second matrix rows:    ";
        cin >> rows2;

        cout << "Second matrix columns:    ";
        cin >> cols2;
    }

    int arr1[rows1][cols1], arr2[rows2][cols2], arr3[rows1][cols2];

    for(int i=0; i<=rows1-1; i++)
    {
        for(int j=0; j<=cols1-1; j++)
        {
            cout << "A[" << i << "][" << j <<"] = ";
            cin >> arr1[i][j];
        }
    }
    for(int i=0; i<=rows2-1; i++)
    {
        for(int j=0; j<=cols2-1; j++)
        {
            cout << "B[" << i << "][" << j <<"] = ";
            cin >> arr2[i][j];
        }
    }

    cout << endl << "A = ";
    for(int i=0; i<=rows1-1; i++)
    {
        for(int j=0; j<=cols1-1; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
        cout << "    ";
    }
    cout << endl;
    cout << "B = ";
    for(int i=0; i<=rows2-1; i++)
    {
        for(int j=0; j<=cols2-1; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
        cout << "    ";
    }

    for(int i=0; i<=rows1-1; i++)
    {
        for(int j=0; j<=cols2-1; j++)
        {
            int sum = 0;
            for(int k=0; k<=cols1-1; k++)

            {
                sum += arr1[i][k]*arr2[k][j];
                arr3[i][j] = sum;
            }
        }
    }

    cout << endl << endl;

    cout << "AB: " << endl;
    for(int i=0; i<=rows1-1; i++)
    {
        for(int j=0; j<=cols2-1; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }


    getch();
}




