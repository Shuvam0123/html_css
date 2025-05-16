#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter any three big numbers fasttt" << endl;
    cin >> a >> b >> c;

    // Using nested ternary operators to determine the greatest number
    int greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    cout << "The greatest number is " << greatest << endl;

    return 0;
}