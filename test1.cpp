#include <iostream>
using namespace std;

struct Number {
    int num;
}

int main()
{
    Number num1;
    cout << "Enter a number: ";
    cin >> num1.num;
    cout << "You entered: " << num1 << endl;

    return 0;
}