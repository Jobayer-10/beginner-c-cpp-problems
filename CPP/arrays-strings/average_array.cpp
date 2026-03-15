#include <iostream>
using namespace std;

int main() {

    int arr[100], n;
    float sum = 0;

    cout << "Enter size of array: ";
    cin >> n;

    for(int i = 0; i < n; i++) {

        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Average = " << sum / n;

    return 0;
}
