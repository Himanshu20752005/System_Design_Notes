#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
     ~Human(){
        cout<<"Human"<<endl;
     }
     
};

class Student :public Human{
    public:
    ~Student(){
        cout<<"Student"<<endl;
    }
     

};

int main(){
    Student s1;
    // OUTPUT (opposit of constructor)
    // Student
    //   ||
    //   \/
    // Humans
    return 0;
}