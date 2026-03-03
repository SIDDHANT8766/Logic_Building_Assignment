#include <iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3)
{
    T max = no1;

    if(no2 > max)
        max = no2;
    if(no3 > max)
        max = no3;

    return max;
}

int main()
{
    cout << Max(10, 20, 30) << endl;
    cout << Max(10.5f, 7.5f, 9.8f) << endl;

    return 0;
}
