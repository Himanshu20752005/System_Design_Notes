#include<bits/stdc++.h>
using namespace std;

class Person{
    protected:
    string name;

    public:
    void introduction(){
        cout<<"Hello my name is "<<name;
    }

};

class Employee : public Person{
    protected :
    int salary;
    public:
    void monthly_Salary(){
        cout<<"My monthly salary is "<<salary<<endl;
    }
};


class Manager : public Employee{
    public:
    string department;
    
    Manager(string name , int salary , string department)
    : department(department){
        // Remember this part (only where "this" is used)
        this->name = name;
        this->salary = salary;
    }

    void work(){
        cout<<"I am the department lead of "<<department <<endl;
    }
};

int main(){
    Manager m1("Himanshu" , 2000000 , "Machine Learning");
    m1.work();
    m1.monthly_Salary();
    m1.introduction();
}