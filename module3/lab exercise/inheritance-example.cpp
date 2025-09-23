#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void showPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    string course;

public:
    void setStudent(string n, int a, string c) {
        setPerson(n, a);   // reuse base class function
        course = c;
    }

    void showStudent() {
        showPerson();      // reuse base class function
        cout << "Course: " << course << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void setTeacher(string n, int a, string s) {
        setPerson(n, a);   // reuse base class function
        subject = s;
    }

    void showTeacher() {
        showPerson();      // reuse base class function
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    s.setStudent("Rahul", 20, "Computer Science");
    t.setTeacher("Mr. Sharma", 40, "Mathematics");

    cout << "Student Details:" << endl;
    s.showStudent();

    cout << "\nTeacher Details:" << endl;
    t.showTeacher();

    return 0;
}

