#include<iostream>
void print(int x){
    std::cout << "Int: " << x << std::endl;
}
void print(double x){
    std::cout << "Double: " << x << std::endl;
}
int main(){
    print(5);
    print(3.14);
    return 0;
}