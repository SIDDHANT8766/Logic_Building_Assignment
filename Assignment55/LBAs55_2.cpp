#include <iostream>
using namespace std;

template <class T>
T Sub(T no1, T no2)
{
    return no1 - no2;
}

int main() {
    int iRet = Sub(50, 20);
    cout << "Subtraction of integers: " << iRet << endl;

    float fRet = Sub(15.7f, 10.2f);
    cout << "Subtraction of floats: " << fRet << endl;

    return 0;
}