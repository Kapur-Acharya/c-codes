#include <iostream>
using std ::cin;
using std ::cout;
using std ::string;

int main()
{
    int number;
    int sum = 0;
    int remainder;

    cout << "Enter any multiple digit number\n";
    cin >> number;
    while (number > 0)
    {
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }

    cout << "The sum of the digits =" << sum;
    return 0;
}