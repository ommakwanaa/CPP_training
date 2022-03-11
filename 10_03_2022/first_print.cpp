#include<iostream>
using namespace std;
class base{
    public:
    int b;
    void show(){
        // b = x;
        cout<<"\nbase "<< b <<endl;
    }
};
class derived :public base{
    public:
    int b;
    void show(){
        // b = x;
        cout<<"\nderived "<< b <<endl;
    }
};
int main(){
    base b1;
    derived d1;
    base *bptr;
    bptr = &b1;
    cout<<"\n\n\n base class pointer assigned adress of base class object"<<endl;
    bptr->b=100;
    bptr->show();


return 0;
}