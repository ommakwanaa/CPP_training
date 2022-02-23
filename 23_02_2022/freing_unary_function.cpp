#include<iostream>
using namespace std;
class space{
    int a,b,c;
    public:

    space(int x=0, int y =0, int z=0){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"\nx="<<a<<"\ny="<<b<<"\nz="<<c;
    }
    friend space operator++(space value){
            space temp;
            cout<<"\ninside freind";
            temp.a = ++value.a;
            temp.b = ++value.b;
            temp.c = ++value.c;
            return temp;

    }
};
int main(){
space q2;
space q1(5,5,5);
space q3(5,5,5);
q1.display();
q2 = ++q3;
q2.display();
return 0;

}