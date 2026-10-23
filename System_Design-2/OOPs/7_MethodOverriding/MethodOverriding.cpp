#include <bits/stdc++.h>
using namespace std;

class Human {
public:
    virtual void work() {
        cout << "Human is working\n";
    }
};

class Student : public Human {
public:
    void work() override {
        cout << "Student is studying\n";
    }
};

int main() {
    Human h;
    Student s;

    h.work();
    s.work();

    Human* ptr = &s;
    ptr->work();

    return 0;
}

// Human is working
// Student is studying
// Student is studying