#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=10;
    auto func=[](int a,int b){
        a++;
        b++;
    };
    func( a, b);
    cout << "a:" << a << "b:" << b << endl;
    return 0;
}