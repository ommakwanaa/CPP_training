#include <iostream>
using namespace std;
class base
{
    int i, j;

public:
    void set(int a, int b)
    {
        i = a;
        j = b;
    }
    void show()
    {
        cout << i << " " << j;
    }
};
class derived : private base
{
    int k;

public:
    derived(int x)
    {
        k = i*j;
    }
    void show()
    {
        cout << k << endl;
    }
};
class derived2 : public derived
{
    int m;

public:
    void setm()
    {
        m = i+j;
    }
    void showkk()
    {
        cout << m << endl;
    }
};
int main()
{
    derived ob1;
    derived2 ob2;
    ob1.set(1,2);
    ob1.show();
    ob2.setm(3,4);
    ob2.showkk();

}