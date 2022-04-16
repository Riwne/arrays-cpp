#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int sum = 0;
    // sum of all elements of an array.
    for (int i = 0; i < 6; i++) {
        sum += arr[i];
    }

    cout << "Sum " << sum;

    return 0;
}