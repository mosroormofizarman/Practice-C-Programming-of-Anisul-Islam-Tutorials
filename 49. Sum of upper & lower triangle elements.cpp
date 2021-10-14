
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int rows, cols, upper_sum=0, lower_sum=0;

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
                if(i<j)
                {
                    upper_sum += arr[i][j];
                }
                if(i>j)
                {
                    lower_sum += arr[i][j];
                }
            }
        }
        cout << endl << endl << "Sum of upper triangle elements = " << upper_sum;
        cout << endl << "Sum of lower triangle elements = " << lower_sum;
    }
    else
    {
        cout << endl << "You have to insert equal rows and columns for square matrix.";
    }
    getch();
}






