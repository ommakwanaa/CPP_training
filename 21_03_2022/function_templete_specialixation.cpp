#include <iostream>
using namespace std;
template <typename X>
void swapp(X &a, X &b)
{
    X temp;
    temp = a;
    a = b;
    b = temp;
    cout << "inside template _____ swapp" << endl;
}

void swapp(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "inside template swapp" << endl;
}
int main()
{
    int i = 10, j = 20;
    double x = 10, y = 20;
    char a = 'x', b = 'z';
    cout << "orignal int := " << i << " " << j << endl;
    cout << "orignal double:= " << x << " " << y << endl;
    cout << "orignal char := " << a << " " << b << endl;
    swapp(i, j);
    swapp(x, y);
    swapp(a, b);
    cout << "swaped int := " << i << " " << j << endl;
    cout << "swaped double:= " << x << " " << y << endl;
    cout << "swaped char := " << a << " " << b << endl;

}