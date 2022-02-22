#include<iostream>
using namespace std;
class complex{
    int real, img;
    public:
        complex(int a=0, int b=0){
            real = a;
            img = b;
        }

        // method to cout the object
        void display(){
            cout<< "real = "<<real<<endl<<"imaginary = "<<img<<endl<<endl;
        }

        // operator overloading using friend friend function
        friend complex operator+(complex a, complex b){
            complex temp;
            temp.real = a.real + b.real;
            temp.img = a.img + b.img;
            return temp;
        }

        friend complex operator-(complex a, complex b){
            complex temp;
            temp.real = a.real - b.real;
            temp.img = a.img - b.img;
            return temp;
        }

        friend complex operator*(complex a, complex b){
            complex temp;
            temp.real = a.real * b.real;
            temp.img = a.img * b.img;
            return temp;
        }

        friend complex operator/(complex a, complex b){
            complex temp;
            temp.real = a.real / b.real;
            temp.img = a.img / b.img;
            return temp;
        }
};

int main(){
    complex c1(10,40), c2(10,10), c3, c4;
    c1.display();
    c2.display();

    // method-2 to invoke the friend function
    cout<<"after addition operator overloading"<<endl;
    c4 = operator+(c1, c2);
    c4.display();

    cout<<"after subtraction operator overloading"<<endl;
    c4 = operator-(c1, c2);
    c4.display();

    cout<<"after multiplication operator overloading"<<endl;
    c4 = operator*(c1, c2);
    c4.display();

    cout<<"after division operator overloading"<<endl;
    c4 = operator/(c1, c2);
    c4.display();
    return 0;
}