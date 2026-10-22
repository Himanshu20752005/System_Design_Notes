#include<bits/stdc++.h>
using namespace std;

class Human{
    protected:
      string name;
      int age;

    public:
      Human(string name , int age)
      : name(name) , age(age){};
      
      void work(){
        cout<<"I am working on something \n";
      }
};

class Student: public Human{
    public:
      int roll_No;
      int fees;

    Student(string name , int age ,int roll_No , int fees)
     :Human(name , age) , roll_No(roll_No) , fees(fees)
    {

        // OR 
        // this->name = name;
        // this->age = age;
        // this -> roll_No = roll_No;
        // this->fees = fees;

        
    }

    void displayDetails(){
        cout << name << endl;
        cout << age << endl; 
        cout << roll_No << endl;
        cout << fees << endl;
    }
};

int main(){
    Student A1("Hima" , 21 ,1,100);
    A1.work();
    A1.displayDetails();
    // cout << A1.name; is names is public
}