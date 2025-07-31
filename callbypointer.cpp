#include<iostream>
void change(int *x){
    *x = 10;
}
int main(){
    int num = 5;
    change(&num);
    std::cout << num << std::endl;
    return 0;
}