#include <iostream>
using namespace std;
class A
{

public:
    void DISPLAYA() {cout<<"class a";}
};
class B
{

public:
    void DISPLAYB() {cout<<"class b";}
};
class C : public A
{

public:
    void DISPLAYC() {cout<<"class C";}
};
class D : public B
{

public:
    void DISPLAYD() {cout<<"class D";}
};
class E : public B,public C
{

public:
    void DISPLAYE() {cout<<"class E";}
};
class F : public E
{

public:
    void DISPLAYF() {cout<<"class F";}
};

int main()
{
    A a;
    B b;
    C c;
    D d;
    E e;
    F f;
    a.DISPLAYA();
    b.DISPLAYA();
    b.DISPLAYC();
    b.DISPLAYD();

    f.DISPLAYA();
    f.DISPLAYB();
    f.DISPLAYC();
    f.DISPLAYE();

    e.DISPLAYA();
    e.DISPLAYB();
    e.DISPLAYC();
    

}