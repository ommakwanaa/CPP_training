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
class delivered : private base
{
    int k;

public:
    delivered(int x)
    {
        k = x;
    }
    void show()
    {
        cout << k << endl;
    }
};
int main()
{
    delivered ob(3); 
    ob.set(1, 2); // it will not allow bcoz the delivered function is private
    ob.show();
    return 0;
}