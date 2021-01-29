#include <iostream>

using namespace std;

int main()
{
    int Arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

    for (int i = 0; i < 10; i++)
        cout << Arr[i] << " ";
    cout << endl;

    cout << "reverse" << endl;

    for (int i = 9; i >= 0; i--)
        cout << Arr[i] << " ";
    cout << endl;

}