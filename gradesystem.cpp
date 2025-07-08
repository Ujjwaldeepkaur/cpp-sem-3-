#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "enter the number: ";
    cin >> number;

    if (number <= 100 && number > 90) {
        cout << number << endl;
        cout << "A" << endl;
    }
    else if (number <= 90 && number > 80) {
        cout << number << endl;
        cout << " B" << endl;
    }
    else if (number <= 80 && number > 70) {
        cout << number << endl;
        cout << " C" << endl;
    }
    else {
        cout << number << endl;
        cout << " Fail" << endl;
    }
 
    return 0;
}
