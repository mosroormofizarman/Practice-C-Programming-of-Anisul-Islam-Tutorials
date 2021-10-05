#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i=1;
    while(i<=10)
    {
        cout << "Bangladesh" << " (" << i << ")" << endl;
        i++;
    }

    cout << endl << endl;

    while(i<=100)
    {
        cout << i << endl;;
        i++;
    }

    cout << endl;
    cout << "End of \"while\" loop";

    getch();
}
