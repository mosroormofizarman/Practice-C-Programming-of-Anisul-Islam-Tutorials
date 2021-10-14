
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int rows, cols, left_sum=0, right_sum=0;

    cout << "Enter row: ";
    cin >> rows;

    cout << "Enter column: ";
    cin >> cols;

    if(rows == cols)
    {
        int arr[rows][cols];

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
                if(i==j)
                {
                    left_sum += arr[i][j];
                }
                if((i+j) == (rows-1))
                {
                    right_sum += arr[i][j];
                }
            }
        }
        cout << endl << endl << "Sum of left diagonal elements = " << left_sum;
        cout << endl << "Sum of right diagonal elements = " << right_sum;
    }
    else
    {
        cout << endl << "You have to insert equal rows and columns for square matrix.";
    }
    getch();
}





