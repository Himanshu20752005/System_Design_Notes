#include<bits/stdc++.h>
using namespace std;


class Human{
    public :
      string name;
      int age;

      Human(){
        cout<<"I am Human \n";
      }

};

class Student : public Human{
    public:
     int rollNo;
     int Fees;

     Student(){
        cout<<"I am student";
     }
};


int main(){
    Student s1;
}