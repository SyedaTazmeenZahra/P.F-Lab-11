//Write a function that takes an integer and return its sqare.
#include <iostream>
using namespace std;
int square(int num) {
    cout << num * num;
    return num;
}
int main() {
    square(4); cout << endl;
    square(12); cout << endl;
    square(21); cout << endl;
    square(27);
    return 0;
}