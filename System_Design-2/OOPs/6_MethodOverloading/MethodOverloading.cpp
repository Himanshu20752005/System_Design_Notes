#include<bits/stdc++.h>
using namespace std;

class Calculator{
    public :
    int add(int a, int b){
        return a+b;
    }

    int add(int a , int b , int c){
        return a+b+c;
    }

    double add(double a , double b){
        return a+b;
    }

    void display(string name ,int age){
        cout << "Name :" << name 
             << ", Age :"<< age;
    }

    void display(int age , string name){
        cout << "Name :" << name 
             << ", Age :"<< age;
    }


};


int main(){
    Calculator cal;
    cout << cal.add(1,2)<<endl;
    cout << cal.add(1,2,3) <<endl;
    cout << cal.add(2.0,3.5) << endl;

    cal.display("Himanshu" , 21);
    cal.display(21 ,"Himanshu");
}
