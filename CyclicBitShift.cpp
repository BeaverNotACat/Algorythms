#include <iostream>
#include <cmath>
using namespace std;

int CyclicBitshiftLEFT(int n, int i)
{
    int n1 = n >> (32 - i);
    return (n << i) | n1;
}

int CyclicBitshiftRIGHT(int n, int i)
{
    int n1 = n << (32 - i);
    return (n >> i) | n1;
}

int main()
{
    int x, i, x1;
    cout << "Enter number, then a shift" << endl;
    cin >> x >> i;

    cout << "Left shift is" << endl;
    cout << CyclicBitshiftLEFT(x, i) << endl;

    cout << "Right shift is" << endl;
    cout << CyclicBitshiftRIGHT(x, i) << endl;

    return 0;
}