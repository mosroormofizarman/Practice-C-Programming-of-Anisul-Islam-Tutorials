#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x=13, y=19;

    if(x>15 || y<2){
        cout << "Yes" << endl;
    }
    if(x>11 || y<2){
        cout << "Yes" << endl;
    }
    if(x>11 || y>2){
        cout << "Yes";
    }
    getch();
}

