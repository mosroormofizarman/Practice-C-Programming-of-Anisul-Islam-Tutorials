#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter three integer numbers: ";
    cin >> num1 >> num2 >> num3;

    if(num1>num2 && num1>num3 && num2>num3){
       cout << num1 << " is the largest , " << num2 << " is the middelest and " << num3 << " is the smallest number.";
    }
    else if(num1>num2 && num1>num3 && num3>num2){
        cout << num1 << " is the largest , " << num3 << " is the middelest and " << num2 << " is the smallest number.";
    }
    else if(num2>num1 && num2>num3 && num3>num1){
       cout << num2 << " is the largest , " << num3 << " is the middelest and " << num1 << " is the smallest number.";
    }
    else if(num2>num1 && num2>num3 && num1>num3){
        cout << num2 << " is the largest , " << num1 << " is the middelest and " << num3 << " is the smallest number.";
    }
    else if(num3>num1 && num3>num2 && num1>num2){
        cout << num3 << " is the largest , " << num1 << " is the middelest and " << num2 << " is the smallest number.";
    }
    else{
        cout << num3 << " is the largest , " << num2 << " is the middelest and " << num1 << " is the smallest number.";
    }

    getch();
}

