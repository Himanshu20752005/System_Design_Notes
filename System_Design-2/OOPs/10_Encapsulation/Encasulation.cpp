/*
1. Encapsulation
Definition: Wrapping data and the methods that operate on that data into a single unit (class), 
while restricting direct access to the data.

We use access modifiers like private and provide controlled access through public methods such 
as getters and setters.
*/ 

#include<bits/stdc++.h>
using namespace std;

class parent{
    private:
    int age;

    public :
     void setAge(int age){
         this->age = age;
     }

     int getAge(){
        return age;
     }
};

int main() {
    parent s;
    s.setAge(21);
    cout << s.getAge();

    return 0;
}
