#include <iostream>
using namespace std;

template <class T>
T SecondMax(T *arr, int iSize)
{
    T max = arr[0];
    T smax = arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if(arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
    }
    return smax;
}

int main()
{
    int arr[] = {10,20,30,40,50};

    cout << SecondMax(arr,5);   // 40

    return 0;
}
