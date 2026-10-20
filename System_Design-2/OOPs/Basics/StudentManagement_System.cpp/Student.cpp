#include<bits/stdc++.h>
using namespace std;

class student{
    public :
       string name;
       int rollNo;
       float cgpa;

    student(string name1 , int rollNo1 , int cgpa1){
        name = name1;
        rollNo = rollNo1;
        cgpa = cgpa1;
    }
    
    void displayDetails(){
        cout << "Name : " << name <<endl;
        cout << "Roll No : "<< rollNo <<endl;
        cout << "CGPA :" << cgpa << endl;
        isEligibleForPlacement();
    }
     

    void isEligibleForPlacement(){
        // return cgpa>7.0 ? true : false;
        cout <<"Eligible for placement : " << (cgpa >= 7.0 ?"Yes":"No")  << endl;
    }
    
};

int main(){
    student s1("Himanshu" , 01 , 9.08);
    s1.displayDetails();
    
    student s2("Xyz" , 16 , 6.9);
    s2.displayDetails();

}