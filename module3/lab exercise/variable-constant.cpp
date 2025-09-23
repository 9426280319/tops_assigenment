#include <iostream>
using namespace std;

int main() {
    // Constants (value cannot be changed)
    const double PI = 3.14159;

    // Variables of different data types
    int age = 20;
    float height = 5.8;
    double radius = 4.5;
    char grade = 'A';
    string name = "Rahul";

    // Operations
    double area = PI * radius * radius;  // using constant
    age = age + 5;                       // modifying variable

    // Output
    cout << "Name: " << name << endl;
    cout << "Age after 5 years: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Circle Area with radius " << radius << " = " << area << endl;

    return 0;
}

