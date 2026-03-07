#include <iostream>
using namespace std;

template <class T>
T Min(T *arr, int iSize)
{
    T min = arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {10,20,5,40,50};

    cout << Min(arr,5);   // 5

    return 0;
}
