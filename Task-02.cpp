//Write function that takes radius of circle and returns area of circle.
#include <iostream>
using namespace std;
double areaofcircle(double radius) {
    const double pi = 3.14;
    double area = pi * radius * radius;
    cout << "Area of circle is: " << area;
    return area;
}
int main() {
    areaofcircle(503.24);
    return 0;
}