#include <iostream>

using namespace std;

//HW1
/*
int main() {
	float num, num_2;

	cout << "Please enter Fahrenheit value: ";
	cin >> num;

	num_2 = (num - 32.0) * (5.0 / 9.0);
	cout << "Celsius value is: " << num_2 << endl;

	return 0;
}
*/

//HW2
/*
int main() {
    int input;
    cout << "Enter your score: ";
    cin >> input;

    if (input >= 0 && input <= 100)
    {
        cout << "Your grade is ";

        if (input >= 90)
            cout << "A" << endl;
        else if (input >= 80 && input < 90)
            cout << "B" << endl;
        else if (input >= 70 && input < 80)
            cout << "C" << endl;
        else if (input >= 60 && input < 70)
            cout << "D" << endl;
        else
            cout << "F" << endl;
    }
    else {
        cout << "The score " << input << " is invalid" << endl;
    }

    return 0;
}
*/

//HW3
//for 문
/*
int main() {
    int sum = 0, num, index;
    cout << "number: ";
    cin >> num;

    for (index = 0; index <= num; ++index)
        sum += index;

    cout << "Sum of 1 to " << num << " = " << sum << endl;

}
*/

//HW3
//while문
/*
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
*/

//HW4
/*
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
*/