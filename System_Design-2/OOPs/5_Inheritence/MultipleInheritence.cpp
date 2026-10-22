
//Class -  By default the mthodsa and all variables are private 
// struct - by deafult its public

#include<bits/stdc++.h>
using namespace std;

class Teacher{
    public:
     string department;

     Teacher(string department)
     : department(department){

     }

};

class contentCreator{
    public:
    int subscriber;
    
    contentCreator(int subscriber)
    : subscriber(subscriber){}
};

class Student{
    protected:
    int rollno;

    public:
    Student(int rollno)
    : rollno(rollno){}

    public:
    void work(){
        cout<<"I study"<<endl;
    }

};

// IMP jisko prele inherit kar rahe ho uska constructor pehel execute hoga
class person :public Teacher , public contentCreator , public Student{
    public:
     string name;
     int age;
     
     person(string name , int age ,int rollno, int subscriber , string department)
      : Teacher(department),
          contentCreator(subscriber),
          Student(rollno),
          name(name),
          age(age) {
            this->department = "Artifical";
          }

     void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<subscriber<<endl;
        cout<<department<<endl;
     }
};

int main(){
    person p1("Hima",21,1,14,"AI");
    p1.display();
    return 0;
}
