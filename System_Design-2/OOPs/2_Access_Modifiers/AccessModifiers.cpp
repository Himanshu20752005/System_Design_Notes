/*
Access modifiers control where class members (variables and methods) can be accessed.
- Public: Can be accessed inside the class, outside the class, and in child classes.
- Private: Can be accessed only within the same class (and by its friends). Child classes cannot access private members directly.
- Protected: Can be accessed within the same class and its child classes, but not directly from outside through an object.
- Important: Access depends on the class relationship, not whether classes are in the same file.

*/

#include <bits/stdc++.h>
using namespace std;

class Human {
public:
    int a = 10;

private:
    int b = 20;

protected:
    int c = 30;

public:
    void display() {
        cout << a << endl;  // Works: public
        cout << b << endl;  // Works: private, same class
        cout << c << endl;  // Works: protected, same class
    }
};

class Student : public Human {
public:
    void show() {
        cout << a << endl;  // Works: public
        // cout << b;       // Error: private
        cout << c << endl;  // Works: protected
    }
};

int main() {
    Student s;

    cout << s.a << endl;  // Works: public
    // cout << s.b;       // Error: private
    // cout << s.c;       // Error: protected

    s.display();
    s.show();

    return 0;
}