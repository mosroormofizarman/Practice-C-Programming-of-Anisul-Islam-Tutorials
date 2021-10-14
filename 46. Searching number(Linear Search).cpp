#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, search_num, position=-1;
    cout << "How many numbers you want to insert: ";
    cin >> num;

    int arr[num];

    for(int i=0; i<=num-1; i++)
    {
        cout << "number[" << i+1 << "] =  ";
        cin >> arr[i];
    }

    cout << endl;

    cout << "Given numbers are: ";
    cout <<"number[] = {" << arr[0];
    for(int i=1; i<=num-1; i++)
    {
        cout << ",  "<< arr[i];
    }
    cout << "}";

    cout << endl << endl;

    cout << "Please insert a number for linear search: ";
    cin >> search_num;

    for(int i=0; i<=num-1; i++)
    {
        if(search_num == arr[i])
        {
           position = i+1;
        }
    }

    if(position == -1)
    {
        cout << "The number is not Found";
    }
    else
    {
        cout << "The position of " << search_num << " is: " << position;
    }

    getch();
}
