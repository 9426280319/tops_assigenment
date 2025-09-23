#include <iostream>
using namespace std;

int main() {
    // Implicit conversion (type casting done automatically)
    int a = 10;
    double b = a;   // int converted to double automatically
    cout << "Implicit conversion (int to double): " << b << endl;

    // Another implicit example
    double x = 5.7;
    int y = x;   // double to int (decimal part lost)
    cout << "Implicit conversion (double to int): " << y << endl;

    // Explicit conversion (type casting done manually)
    double p = 9.8;
    int q = (int)p;   // explicit cast
    cout << "Explicit conversion (double to int): " << q << endl;

    // Another explicit example
    int m = 3, n = 2;
    double result = (double)m / n;   // explicit cast to get precise division
    cout << "Explicit conversion (int to double division): " << result << endl;

    return 0;
}

