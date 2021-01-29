#include <iostream>

using namespace std;

//
void Swap(int& var1, int& var2) {
    int a = var1;
    var1 = var2;
    var2 = a;
}

int main()
{
    int var1 = 20;
    int var2 = 10;

    cout << "var1=" << var1 << ", var2=" << var2 << endl;
    Swap(var1, var2);
    cout << "var1=" << var1 << ", var2=" << var2 << endl;
}