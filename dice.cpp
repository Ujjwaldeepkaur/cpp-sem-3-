+#include <iostream>
using namespace std;
int main(){
    int norounds;
    int a;
    int b;
    cin >> norounds;
    int s;
    for(int i=1;i>=norounds;i++){
        cout << "round:" << i << endl;
        cout << "D1:"  ;
        cin >> a;
        cout << "d2";
        cin >> b;
        if(a==1 && b==1){
            s=0;
            cout << "score" << s << endl;

        }
        else if(a+b==7){
            s=2*(a+b);
             cout << "score" << s << endl;
        } 
        else if (a==b)
        {
            s=a+b+10;
             cout << "score" << s << endl;
        }
        else{
            s=a+b;
             cout << "score" << s << endl;
        }
        
      }
      return 0;
}