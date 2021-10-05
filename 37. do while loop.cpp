#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i=1;
    do{
        cout << "Bangladesh" << " (" << i << ")" << endl;
        i++;
    }while(i<=10);

    cout << endl << endl;

    do{
        cout << i << endl;;
        i++;
    }while(i<=100);

    cout << endl << endl;

    int k = 10;
    do{
        cout << "Bangladesh" << " (" << k << ")" << endl;
        k--;
    }while(k>=1);

    cout << endl;
    cout << "End of \"do while\" loop";

    getch();
}

