#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cin >> rows;
    cin >> cols;
    int arr[100][100]; 
    cout << "Enter elements of the array:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "2D Array:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
