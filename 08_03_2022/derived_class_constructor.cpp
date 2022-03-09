#include<iostream>
using namespace std;
class base{
    int x;
    public:
    base(){cout<<"\nbase default constructor";}
    ~base(){cout<<"\nbase default Dstructor";}
};
class derived : public base{
    int y;
    public:
    derived(){cout<<"\nderived default constructor";}
    derived(int k){cout << "\nderived parametrized constructor call";}
    ~derived(){cout<<"\nderived default Dstructor";}
};

int main(){
    base b;
    derived d1;
    derived d2(10);
    return 0;
}