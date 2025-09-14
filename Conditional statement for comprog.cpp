#include <iostream>
using namespace std;

int main()
{
    int num, rem;
    cout << "Enter a number: ";
    cin >> num;

    rem = num % 2;

    if (rem == 0)
        cout << num << " is an Even Number" << endl;
    else
        cout << num << " is an Odd Number" << endl;

    return 0;
}
