#include <bits/stdc++.h>
using namespace std;

// Abstract class
class Human {
public:
    virtual void work() = 0;  // What to do
};

class Student : public Human {
public:
    void work() override {
        // Hidden implementation details in a real application
        cout << "Student is studying\n";
    }
};

int main() {
    Student s;

    Human* ptr = &s;
    ptr->work();  // Call the interface without knowing the implementation

    return 0;
}