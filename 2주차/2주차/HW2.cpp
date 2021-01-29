#include <iostream>

using namespace std;

//HW2-1
int Fibonacci(int n) {
    if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }
    else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }

}
//HW2-2
int Fibo(int n) {
    int list[2] = { 0, 1 };
    int& a = list[0];
    int& b = list[1];
    int c;
    for (int i = 2; i < n; i++) {
        c = list[1];
        b = list[0] + list[1];
        a = c;
    }
    return b;

}

int main() {
    int n;

    cout << "n을 입력하세요: ";
    cin >> n;


    cout << "first Fibonacci(" << n << "): " << Fibonacci(n) << endl << "second Fibonacci(" << n << "): " << Fibo(n) << endl;

}

