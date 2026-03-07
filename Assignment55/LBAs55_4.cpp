#include <iostream>
using namespace std;

template <class T>
void Swap(T &no1, T &no2) 
{
    T temp;
    temp = no1;
    no1 = no2;
    no2 = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "Before Swap: a = " << a << ", b = " << b << endl;
    Swap(a, b);
    cout << "After Swap:  a = " << a << ", b = " << b << endl;

    float x = 3.5f, y = 7.8f;
    cout << "Before Swap: x = " << x << ", y = " << y << endl;
    Swap(x, y);
    cout << "After Swap:  x = " << x << ", y = " << y << endl;

    return 0;
}