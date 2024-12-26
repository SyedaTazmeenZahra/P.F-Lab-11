// Write a function that take total marks and obtained marks and give percentage.
#include <iostream>
using namespace std;
double calculatePercentage(double marksObtained, double totalMarks) {
    double per = (marksObtained / totalMarks) * 100;
    cout << "Percentage is: " << per;
    return per;
}
int main() {
    calculatePercentage(395.2,510.0);
    return 0;
}   