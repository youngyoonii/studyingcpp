#include <iostream>

using namespace std;

int main() {
    int sum = 0, index = 0, num;
    cout << "number: ";
    cin >> num;

    while (index <= num)
    {
        sum += index;
        ++index;
    }

    cout << "Sum of 1 to " << num << " = " << sum << endl;

}