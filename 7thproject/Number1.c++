#include <iostream>
#include <cmath>
using namespace std;

int main()
 {
    double radius;
    const double PI = 3.14159265358979;

    cout << "Enter radius: ";
    cin >> radius;

    double circumference = 2 * PI * radius;
    double area_circle = PI * radius * radius;

    double side = 2 * radius;
    double area_square = side * side;
    double perimeter_square = 4 * side;

    cout << "\n--- Circle ---" << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area_circle << endl;

    cout << "\n--- Square (side = 2r) ---" << endl;
    cout << "Area: " << area_square << endl;
    cout << "Perimeter: " << perimeter_square << endl;

    return 0;
}