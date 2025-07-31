#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    int matrix[rows][cols];
    cout << "Enter the elements of the matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "\nRow-wise sums:\n";
    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j];
            sum += matrix[i][j];
            if(j < cols - 1) cout << " + ";
        }
        cout << " = " << sum << endl;
    }
    return 0;
}
