#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    string name;
    int age;
};

class Teacher : public Human{
    public:
    string department;

    Teacher(string name , int age , string department)
    : department(department){
      this->name = name;
      this->age= age;
    }

    void dispaly(){
    cout<<name << endl << age<<endl<<department<<endl;
    }
    
};

class student : public Human{
    public:
    int rollNo;

    student(string name , int age , int rollNo){
        this->name = name;
        this->age = age;
        this->rollNo = rollNo;
    }
    void dispaly(){
        cout<<name << endl << age<<endl<<rollNo<<endl;
    }
};


int main(){
    student A1("Himanshu" , 21, 1);
    A1.dispaly();
    Teacher A2("Himanshu2",21,"AIML");
    A2.dispaly();
}

