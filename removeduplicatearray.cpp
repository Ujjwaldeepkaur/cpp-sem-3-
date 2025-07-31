#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n], unique[n], k = 0;
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Removing duplicates
    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for(int j = 0; j < k; j++) {
            if(arr[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate) {
            unique[k++] = arr[i];
        }
    }
    // Printing unique elements
    cout << "Array after removing duplicates:\n";
    for(int i = 0; i < k; i++) {
        cout << unique[i] << " ";
    }
    cout << endl;
    return 0;
}
