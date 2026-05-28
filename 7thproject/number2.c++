#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979;

double get_input()
 {
    double radius;
    cout << "Enter radius: ";
    cin >> radius;
    return radius;
}

double circum_circle(double r) {
    return 2 * PI * r;
}

double area_circle(double r) {
    return PI * r * r;
}

double area_square(double r) {
    double side = 2 * r;
    return side * side;
}

double perimeter_square(double r) {
    double side = 2 * r;
    return 4 * side;
}

void print_output(double r) 
{
    cout << "\n--- Circle ---" << endl;
    cout << "Circumference: " << circum_circle(r) << endl;
    cout << "Area: " << area_circle(r) << endl;

    cout << "\n--- Square (side = 2r) ---" << endl;
    cout << "Area: " << area_square(r) << endl;
    cout << "Perimeter: " << perimeter_square(r) << endl;
}

int main() {
    double r = get_input();
    print_output(r);
    return 0;
}