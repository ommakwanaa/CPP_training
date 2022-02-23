#include<iostream>
using namespace std;
class space{
    int a,b,c;
    public:
    space(){
        a=b=c=1;
    }
    space(int x, int y , int z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"\nx="<<a<<"\ny="<<b<<"\nz="<<c;
    }
    space operator++();
    space operator++(int);
};
space space ::operator++(){
    space temp;
    cout<<"\n\npre";
    temp.a = ++a;
    temp.b = ++b;
    temp.c = ++c;
    return temp;
}
space space ::operator++(int){
    space temp;
    cout<<"\n\npost";
    temp.a = a++;
    temp.b = b++;
    temp.c = c++;
    return temp;
}
int main(){
space q2;
space q1(5,5,5);
q1.display();
q2 = ++q1;
q1.display();
q2 = q1++;
q1.display();
return 0;

}