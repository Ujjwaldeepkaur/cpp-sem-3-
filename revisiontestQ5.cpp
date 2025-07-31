#include <iostream>
using namespace std;
class Calculator {
public:
    int process(int a, int b) {
        return a + b;
    }
    int process(int* a, int* b) {
        return *a + *b;
    }
    int process(int &x) {
        x = x * 2;
        return x;
    }
    int process(int a, int* b) {
        return a * (*b);
    }
};
int main() {
    Calculator c;
    int a = 5, b = 10;
    int x = 3, y = 4;
    int r1 = c.process(a, b);
    int r2 = c.process(&a, &b);
    int r3 = c.process(x);
    int r4 = c.process(y, &b);
    cout << "Sum (int, int): " << r1 << endl;
    cout << "Sum (ptr, ptr): " << r2 << endl;
    cout << "Double by ref: " << r3 << endl;
    cout << "Product (val, ptr): " << r4 << endl;
    return 0;
}
