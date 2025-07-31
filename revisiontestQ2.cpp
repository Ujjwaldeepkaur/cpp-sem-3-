#include <iostream>
using namespace std;
int calculate(int a, int b) {
    return a + b;
}
float calculate(float a, float b) {
    return a * b;
}
float calculate(int a, int b, int c) {
    return (a + b + c) / 3.0f;
}
int main() {
    int sum = calculate(10, 20);                   
    float product = calculate(3.5f, 2.0f);          
    float average = calculate(10, 20, 30);         
    cout << "Sum of 10 and 20 = " << sum << endl;
    cout << "Product of 3.5 and 2.0 = " << product << endl;
    cout << "Average of 10, 20, and 30 = " << average << endl;

    return 0;
}
