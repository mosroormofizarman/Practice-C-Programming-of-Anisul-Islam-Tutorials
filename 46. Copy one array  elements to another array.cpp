
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, search_num, position=-1;
    cout << "How many numbers you want to insert into First Array: ";
    cin >> num;

    int arr01[num], arr02[num];

    for(int i=0; i<=num-1; i++)
    {
        cout << "element[" << i+1 << "] =  ";
        cin >> arr01[i];
    }

    cout << endl;

    cout << "First Array: ";
    cout <<"element[] = {" << arr01[0];
    for(int i=1; i<=num-1; i++)
    {
        cout << ",  "<< arr01[i];
    }
    cout << "}";

    cout << endl << endl;

    for(int i=0; i<=num-1; i++)
    {
        arr02[i] = arr01[i];
    }

    cout << "Second Array: ";
    cout <<"element[] = {" << arr02[0];
    for(int i=1; i<=num-1; i++)
    {
        cout << ",  "<< arr02[i];
    }
    cout << "}";

    getch();
}
