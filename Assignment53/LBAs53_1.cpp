#include <iostream>
using namespace std;

template <class T>
void CopyArray(T *src, T *dest, int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        dest[i] = src[i];
    }
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int brr[5];

    CopyArray(arr, brr, 5);

    for(int i = 0; i < 5; i++)
    {
        cout << brr[i] << " ";
    }

    return 0;
}
