#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b, T c, T d) 
{
    T maxVal = a;

    if(b > maxVal)
    {
        maxVal = b; 
    }
    if(c > maxVal) 
    { 
        maxVal = c; 
    }
    if(d > maxVal) 
    { 
        maxVal = d; 
    }

    return maxVal;
}

int main() 
{
    int iRet = Max(10, 50, 30, 40);
    cout << "Maximum of integers: " << iRet << endl;

    float fRet = Max(12.5f, 45.1f, 88.2f, 7.5f);
    cout << "Maximum of floats: " << fRet << endl;

    return 0;
}