/*
    Male       Student       Female
       \          |          /
        \         |         /
        (  Boy )    ( Girl )
*/
// Define parent class first
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    void print(){
        cout<<"I am a student \n";
    }
};


class Male {
    public:
    void MalePrint(){
        cout<<"I am Male \n";
    }
};


class Female {
    public:
    void FemalePrint(){
        cout<<"I am Male \n";
    }
};


class Boys : public Student , public Male{
    public :
    void BoyPrint(){
        cout<<"I am Boy\n";
    }
};

class Girl : public Student ,public Female{
    public :
    void GirlPrint(){
        cout<<"I am girl\n";
    }
};


int main(){
   Girl G1;
   G1.print();
   G1.GirlPrint();
   G1.FemalePrint();

   Boys B1;
   B1.print();
   B1.MalePrint();
   B1.BoyPrint();
}