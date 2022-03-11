#include <iostream>
using namespace std;
class A
{

public:
    void DISPLAYA() {cout<<"class a"<<endl<<"\t";}
};
class B
{

public:
    void DISPLAYB() {cout<<"class b"<<endl<<"\t";}
};
class C : public B
{

public:
    void DISPLAYC() {cout<<"class C"<<endl<<"\t";}
};
class D : public B ,public C
{
public:
    void DISPLAYC() {cout<<"class C"<<endl<<"\t";}
};
int main()
{
    A a;
    B b;
    C c;
    D d;
    c.DISPLAYA();
    b.DISPLAYC();
    b.DISPLAYD();
    d.DISPLAYB();
    c.DISPLAYB();
    d.DISPLAYC();
    

}