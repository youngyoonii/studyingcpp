#include <iostream>

using namespace std;

//참조연산자, 참조 변수, 포인터 극악...

void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int var1 = 10, var2 = 20;
    cout << "var1 = " << var1 << ", var2 = " << var2 << endl;
    Swap(&var1, &var2);
    cout << "var1 = " << var1 << ", var2 = " << var2 << endl;

}
