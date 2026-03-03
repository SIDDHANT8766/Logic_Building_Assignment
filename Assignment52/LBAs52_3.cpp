#include <iostream>
using namespace std;

template <class T>
T AddN(T *arr, int iSize)
{
    T sum = 0;

    for(int i = 0; i < iSize; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0f,3.7f,9.8f,8.7f};

    int iSum = AddN(arr,5);
    cout << iSum << endl;

    float fSum = AddN(brr,4);
    cout << fSum << endl;

    return 0;
}
