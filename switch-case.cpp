// write a c++ program that takes a number form the user 1, 2 and 3 and prints a msg based on the number using a switch statement; 1: u selected , 2: u selected number 2, 3: u selected number 3
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter 1 or 2 or 3" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "u selected 1";
        break;

    case 2:
        cout << "u selected 2";
        break;

    case 3:
        cout << "u selected 3";
        break;

    default:
        cout << "wrong input";
        break;
    }
}