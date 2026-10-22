#include<bits/stdc++.h>
using namespace std;

class student {
    public :
       string name;
       int roll;
       double cgpa;
        
           
       student(string name ,int roll, double cpga)
       : name(name) , roll(roll),cgpa(cgpa){
      // insted of using "this" we can directly assign values
      //  OR 
      //   this->name = name;
      //   this->roll = roll;
      //   this->cgpa = cgpa;
       }

       student(string name ,int roll, double cpga){
        this->name = name;
        this->roll = roll;
        this->cgpa = cgpa;
       }

       
/*
    TOPIC: this Keyword in C++

    1. The 'this' keyword is a pointer that refers to
       the current object of a class.

    2. It is used to access the current object's data
       members and member functions.

    3. It is useful when parameter names and data member
       names are the same.

       Example:
       this->cgpa = cgpa;

       Here:
       - this->cgpa refers to the object's data member.
       - cgpa refers to the parameter passed to the method.

    4. Using 'this' is optional when there is no naming
       conflict. C++ automatically accesses the current
       object's members inside non-static member functions.

    5. The 'this' keyword can be used in constructors,
       setters, and other non-static member functions.

    6. 'this' cannot be used inside static member functions
       because static functions do not belong to a
       particular object.

    7. Unlike Java, where we write this.member,
       C++ uses this->member because 'this' is a pointer.

    8. In C++, member initializer lists are commonly used
       to initialize data members in constructors.

       Example:
       Student(string name) : name(name) {}
*/

  // In setter we can do :cgpa(cgpa) its only valid for constructor
       void setCGPA(double cgpa){
        this->cgpa = cgpa;
       }

       void displayDetails(){
        cout<<"Name : "<<name << endl;
        cout<<"Roll No :"<<roll<<endl;
        cout<<"CGPA : "<<cgpa <<endl;
       }


};

int main(){
    student s1("Himanshu" , 101 , 8.54);
    s1.displayDetails();
    cout<<"\nUpdate cgpa"<<endl;
    s1.setCGPA(9.08);
    s1.displayDetails();
    return 0;
}
