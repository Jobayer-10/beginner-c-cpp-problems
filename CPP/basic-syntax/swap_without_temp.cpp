#include <iostream>
using namespace std;

int main() {

    int a = 5, b = 10;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
