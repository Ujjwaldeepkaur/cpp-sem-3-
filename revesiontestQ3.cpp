#include <iostream>
using namespace std;
void doubleByValue(int x) {
    x = x * 2;
    cout << "Inside doubleByValue: x = " << x << endl;
}
void doubleByReference(int &x) {
    x = x * 2;
    cout << "Inside doubleByReference: x = " << x << endl;
}
int main() {
    int a = 10;
    int b = 10;
    cout << "Before doubleByValue: a = " << a << endl;
    doubleByValue(a);
    cout << "After doubleByValue: a = " << a << endl;
    cout << endl;
    cout << "Before doubleByReference: b = " << b << endl;
    doubleByReference(b);
    cout << "After doubleByReference: b = " << b << endl;
    return 0;
}
