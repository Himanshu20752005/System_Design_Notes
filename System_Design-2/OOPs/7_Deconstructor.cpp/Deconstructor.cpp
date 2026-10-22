#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
     Student(){
        cout<<"Staring with Constructor"<<endl;
     }

     void work(){
        cout<<"Study";
     }
    //   Doesnt have parameters Eg ~Student(int x)
     ~Student(){
        cout<<"Exectured at the end "<<endl;

     }
};

int main(){
    Student s1;
    return 0;
}
