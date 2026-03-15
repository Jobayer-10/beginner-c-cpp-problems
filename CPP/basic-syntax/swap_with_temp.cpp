#include <iostream>
using namespace std;

int main() {

    int a = 5, b = 10, temp;

    temp = a;
    a = b;
    b = temp;

    cout << "After swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
