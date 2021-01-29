#include <iostream>
#include <iomanip>

using namespace std;

//HW1
/*
int main() {
	int list[4][3] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12} };

	for (int row = 0; row < 5; row++) {
		int sum = 0;

		if (row == 4) {
			for (int col = 0; col < 4; col++) {
				
				if (col == 3)
					cout << setw(4) << '0';
				else {
					sum = 0;
					for (int row = 0; row < 4; row++)
						sum += list[row][col];
					cout << setw(4) << sum;
				}
				}
			cout << endl;
			}
			

		else {
			for (int col = 0; col < 4; col++) {

				if (col == 3) {
					cout << setw(4) << sum;
				}
				else {
					sum += list[row][col];
					cout << setw(4) << list[row][col];
				}

			}
			cout << endl;
		}
	}
}
*/

//HW2
/*
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


*/