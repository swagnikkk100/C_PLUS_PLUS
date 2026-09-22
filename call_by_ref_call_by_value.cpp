// WAP to show the effect of Call by Value and Call by Reference
#include <iostream>
using namespace std;
// Call by Value
void callByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside Call by Value: x = " << x << ", y = " << y << endl;
}
// Call by Reference
void callByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside Call by Reference: x = " << x << ", y = " << y << endl;
}
int main() {
    int a = 40;
    int b = 50;
    cout << "Before Call by Value: a = " << a << ", b = " << b << endl;
    callByValue(a, b);
    cout << "After Call by Value: a = " << a << ", b = " << b << endl;
    cout << endl;
    cout << "Before Call by Reference: a = " << a << ", b = " << b << endl;
    callByReference(a, b);
    cout << "After Call by Reference: a = " << a << ", b = " << b << endl;
    return 0;
}