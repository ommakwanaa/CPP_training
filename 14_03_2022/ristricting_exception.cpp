#include <iostream>

using namespace std;

void demo() throw(int, double)
{
    int a = 1;
    if (a == 1)
    {
        throw a;
    }
    else if (a == 2)
    {
        throw 'A';
    }
    else if (a == 3)
    {
        throw 1.5;
    }
}

int main()
{
    try
    {
        demo();
    }
    catch (int a)
    {
        cout << "exception caught" << endl;
    }

    cout << "end of program" << endl;
    return 0;
}