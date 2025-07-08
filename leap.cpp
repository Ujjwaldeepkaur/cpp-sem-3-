#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "enter the number: ";
    cin >> number;
    if(number%4 == 0 && number%100!=0 || number%100 != 0){
        cout << number << "leap year" << endl;
    }
    else{
        cout << number << "not a leap year" << endl;
    }
    return 0;
}