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
    void operator++();
};
void space ::operator++(){
    a = ++a;
    b = ++b;
    c = ++c;
}
int main(){
space q1(5,5,5);
q1.display();
++q1;
q1.display();
return 0;

}