#include<iostream>
using namespace std;
int main(){
    // int arr[5]={2,4,6,8,10};
    // int *p=arr;
    // for(int i=0;i<5;i++){
    //     cout << *(p+i) << " ";
    // }
    int a=2;
    int *p=&a;
    int *ptr=&a;
    cout << *p << endl;
    cout << *ptr << endl;
}
