#include <bits/stdc++.h>
using namespace std;

class Human {
public:
    virtual void work() {
        cout << "Human works\n";
    }
};

class Student : public Human {
public:
    void work() override {
        cout << "Student studies\n";
    }
};

int main() {
    Student s;
    Human* ptr = &s;

    ptr->work();

    return 0;
}