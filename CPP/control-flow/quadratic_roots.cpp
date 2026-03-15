#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double a, b, c, root1, root2, discriminant;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {

        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        cout << "Roots are real and different\n";
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
    }

    else if (discriminant == 0) {

        root1 = -b / (2*a);

        cout << "Roots are equal\n";
        cout << "Root = " << root1;
    }

    else {

        cout << "Roots are complex";
    }

    return 0;
}
