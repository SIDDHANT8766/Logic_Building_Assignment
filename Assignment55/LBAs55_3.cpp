#include <iostream>
using namespace std;

template <class T>
T Div(T no1, T no2) {
    if (no2 == 0) {
        cout << "Error: Division by zero" << endl;
        return 0;
    }
    return no1 / no2;
}

int main() {
    int iRet = Div(100, 4);
    cout << "Division of integers: " << iRet << endl;

    float fRet = Div(10.0f, 3.0f);
    cout << "Division of floats: " << fRet << endl;

    return 0;
}