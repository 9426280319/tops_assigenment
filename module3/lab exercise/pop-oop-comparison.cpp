#include <iostream>
using namespace std;

// Rectangle class
class Rectangle {
    int length, breadth;
public:
    void setData(int l, int b) {
        length = l;
        breadth = b;
    }

    int getArea() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect;
    int l, b;

    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;

    rect.setData(l, b);
    cout << "Area of rectangle = " << rect.getArea() << endl;

    return 0;
}

