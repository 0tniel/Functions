// Otniel
// ENTC A3
// 23070123069
#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    swap(&a, &b);
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    return 0;
}
/*
Output
*/

