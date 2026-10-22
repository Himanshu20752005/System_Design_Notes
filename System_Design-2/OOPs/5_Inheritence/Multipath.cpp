/*
             Human
            /     \
         Male     Female
            \     /
            Student
*/

#include <bits/stdc++.h>
using namespace std;

class Human {
public:
    void humanPrint() {
        cout << "I am Human\n";
    }
};

class Male : virtual public Human {
public:
    void malePrint() {
        cout << "I am Male\n";
    }
};

class Female : virtual public Human {
public:
    void femalePrint() {
        cout << "I am Female\n";
    }
};

class Student : public Male, public Female {
public:
    void studentPrint() {
        cout << "I am Student\n";
    }
};

int main() {
    Student s1;

    s1.humanPrint();
    s1.malePrint();
    s1.femalePrint();
    s1.studentPrint();

    return 0;
}