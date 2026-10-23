#include <bits/stdc++.h>
using namespace std;

class Human {
public:
    // Without virtual
    void work() {
        cout << "Human works\n";
    }

    // Normal virtual function
    virtual void workVirtual() {
        cout << "Human works (virtual)\n";
    }
};

class Student : public Human {
public:
    void work() {
        cout << "Student studies\n";
    }

    void workVirtual() override {
        cout << "Student studies (virtual)\n";
    }
};

int main() {
    Student s;
    Human* ptr = &s;

    cout << "Without virtual:\n";
    s.work();       // Student studies
    ptr->work();    // Human works

    cout << "\nWith virtual:\n";
    s.workVirtual();    // Student studies (virtual)
    ptr->workVirtual(); // Student studies (virtual)

    return 0;
}