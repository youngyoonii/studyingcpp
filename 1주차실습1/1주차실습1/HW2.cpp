//입력바등ㄴ 점수에 따라 학점을 반환하는 프로그램을 작성하라
//입력받은 값이 0~100 사이 값이 아닌 경우 오류 출력
//A 90이상 B 80이상 C 70이상 D 60이상 F 60미만

#include <iostream>

using namespace std;

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