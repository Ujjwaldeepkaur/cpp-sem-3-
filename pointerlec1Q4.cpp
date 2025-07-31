#include <iostream>
using namespace std;
int main(){
    int *x= new int(10);
    cout<<x<<endl;
    delete x;
    x=nullptr;
    cout<<x;
    return 0;
}