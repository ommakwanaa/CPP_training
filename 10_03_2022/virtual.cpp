#include<iostream>
using namespace std;
class base{
    public:
    int b;
    virtual void show(){
        cout<<"\nbase "<<endl;
    }
};
class derived :public base{
    public:
    void show(){
        cout<<"\nderived "<<endl;
    }
};
class derived2 :public base{
    public:
    void show(){
        cout<<"\nderived2 "<<endl;
    }
};
int main(){
    derived d1;
    derived2 d2;
    base* ptr;
    ptr = &d1;
    ptr->show();
    ptr = &d2;
    ptr->show();



return 0;
}


