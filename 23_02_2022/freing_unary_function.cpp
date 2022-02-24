//code for freind function in unary operator
#include<iostream>
using namespace std;
class space{
    int a,b,c;
    public:

    space(int x=0, int y =0, int z=0){//parameterized constructor
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"\nx="<<a<<"\ny="<<b<<"\nz="<<c;
    }
    //freind function
    friend complex operator ++ ();

};//end of class
space operator++(int){
        space temp;
        cout<<"\ninside freind";
        temp.a = a++;
        temp.b = b++;
        temp.c = c++;
        return temp;}

int main(){
space q2;
space q1(5,5,5);
q1.display();
q1 = q1++;
q1.display();
return 0;

}