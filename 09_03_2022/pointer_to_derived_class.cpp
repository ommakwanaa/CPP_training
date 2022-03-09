//ommmakwana07

#include<iostream>
using namespace std;
class base{
    int x;
    public:
    base(){cout<<"\nbase default constructor";}
    int setdata(int y){
        x = y;
    }
    void getx(){
    cout<<"value of x is: "<<x<<endl;
    }
};
class derived : public base{
    int p;
    public:
    derived(){cout<<"\nderived default constructor";}
    int setdata(int y){
        p = y;
    }
    void getb(){
        cout<<p;
    cout<<"value of p is: "<<p<<endl;
    }
};

int main(){
    base *ptr;
    // base b;
    derived d;
    // ptr = &b;
    ptr = &d;
    ptr->setdata(10);
    //ptr->getb(); //this will show error
    ((derived *)ptr)->getb();



    return 0;
}