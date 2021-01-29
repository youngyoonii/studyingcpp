#include <iostream>

using namespace std;

int main() {
    int sum = 0, num, index;
    cout << "number: ";
    cin >> num;

    for (index = 0; index <= num; ++index)
        sum += index;

    cout << "Sum of 1 to " << num << " = " << sum << endl;

}