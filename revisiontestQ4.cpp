#include <iostream>
using namespace std;
int getSum(int *arr, int size) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        s += *(arr + i);
    }
    return s;
}
int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int *p = arr;
    int sum = 0;
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
        sum += *(p + i);
    }
    cout << endl;
    cout << "Sum using pointer: " << sum << endl;
    int total = getSum(arr, 5);
    cout << "Sum using function: " << total << endl;
    return 0;
}
