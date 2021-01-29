#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "숫자를 입력하세요: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        for (int j = num; j > i; j--)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}