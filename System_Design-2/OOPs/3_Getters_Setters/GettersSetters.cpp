#include<bits/stdc++.h>
using namespace std;

class student{
   /* To make sure no one access the private variables directly
   we use Getter (to get the current value of the private variable)
   we use Setter (to set/Update the values of the private variable) */
   private:
    string name;
    double cgpa;

   public:
    student(string name ,double cgpa)
      : name(name) , cgpa(cgpa){};
    
    string getname(){
        return name;
    }

    double getcgpa(){
        return cgpa;
    }

    void setname(string name)
    { 
        this->name = name;
    }

    void setcgpa(double cgpa){
        if(cgpa >= 0.0 && cgpa <= 10.0){
             this->cgpa = cgpa;
        }else{
            cout<<"Invalid CGPA" <<endl;
        }
        
    }
};

/* Setters aren't mandatory
   You don't have to provide a setter for every private attribute. For example,
   if a student's roll number must never change after construction, you could provide 
   a getter but no setter. */

int main(){
    student s1("Himanshu" , 9.08);
    cout<<"Using Getter for initialized values \n" <<endl;
    cout<< "Name :"<<s1.getname()<< endl;
    cout<<"CGPA :" <<s1.getcgpa()<<endl;

    cout<<"after Setter"<<endl;
    s1.setname("Hima");
    s1.setcgpa(9.0);
    cout<< "Name :"<<s1.getname()<< endl;
    cout<<"CGPA :" <<s1.getcgpa()<<endl;
    
}