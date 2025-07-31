#include<iostream>
#include<functional>
using namespace std;
// int main(){
//     int a=3;
//     int b=6;
//     int c=8;
//     auto avg=[=](){
//         return (a+b+c)/3;
//     };
//     cout << avg() << endl;
// }
// void runtwice( function<void() >func){
//     func();
//     func();
// }
// int main(){
//     auto greet =[](){
//         cout << "hi!";};
//         runtwice(greet);
//         return 0;
    
// }
int main(){
    int a=6;
    auto fun=[](int x){
        return x*x;
    };
    cout <<"square" << fun(a) << endl;
    return 0;

}