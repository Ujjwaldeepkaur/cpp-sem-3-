#include<iostream>
using namespace std;
void swap(int* a, int* b,int* c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
int* largest(int*a,int*b,int*c){
    if(*a>*b && *a>*c){
        cout << "largest numbers is: " << *a << endl;
        return a;
    }
    else if(*b>*a && *b>*c){
        cout << "Largest number is: " << *b << endl; 
        return b;
    }
    else{
        cout << "Largest number is: " << *c << endl;
        return c;
    }
}
int main(){
    int a=10;
    int b=20;
    int c=30;
    int* p1=&a;
    int* p2=&b;
    int* p3=&c;
    cout << "a = " << *p1 << " at " << p1 << endl;
    cout << "b = " << *p2 << " at " << p2 << endl;
    cout << "c = " << *p3 << " at " << p3 << endl;
    swap(p1,p2,p3);
    cout << "a = " << *p1 << endl;
    cout << "b = " << *p2 << endl;
    cout << "c = " << *p3 << endl;
    int* Largest = largest (p1,p2,p3);
    *Largest=100;
    cout << "a = " << *p1 << endl;
    cout << "b = " << *p2 << endl;
    cout << "c = " << *p3 << endl;
    largest(p1,p2,p3);
}