#include <bits/stdc++.h>
using namespace std;

class Overloading{
    public:
       int add(int a){
        return a+1;
       }

       int add(int a , int b){
        return a+b;
       }
        
       template <typename... Args>
       int add(int a , int b , int c , Args...rest){
          return a+b+c+(rest + ...);
       }

};

int main(){
    Overloading Eg1;
    cout << Eg1.add(1)<<endl;
    cout << Eg1.add(1,2) << endl;
    cout << Eg1.add(1,3,4,6,2) << endl;

    return 0;
}