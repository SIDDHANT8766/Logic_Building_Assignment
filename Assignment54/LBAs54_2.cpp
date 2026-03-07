#include <iostream>
using namespace std;

template <class T>
T SumEven(T *arr, int iSize)
{
    T sum = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }
    return sum;
}

int main()
{
    int arr[] = {10,21,30,41,50};

    cout << SumEven(arr,5);   // 90

    return 0;
}
