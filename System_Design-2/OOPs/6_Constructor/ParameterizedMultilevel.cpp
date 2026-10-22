/* class Human {
   public:
       Human(string name, int age) {
           cout << "Human constructor\n";
       }
   };

   class Student : public Human {
   public:
       Student(string name, int age) {  
       }
   }; */

//   No explicit parent constructor call
/*   Since by default we call parent constructor and here there is not argument for 
     Human (Parents parametrized constructor) therefour it will not work 
     ......Parents must be called ........                               */

#include<bits/stdc++.h>

using namespace std;
   class Human {
   public:
       Human(string name, int age) {
           cout << "Human constructor\n";
       }
   };

   class Student : public Human {
   public:
       Student(string name, int age) 
       : Human(name , age){  
       }
   }; 

   int main(){
    Student s1("Himan" ,21);
   }