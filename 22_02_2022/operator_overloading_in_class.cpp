#include<iostream>

using namespace std;
class class2;
class class1{
    int a, b;
    public:
        class1(int x=0, int y=0){
            a = x;
            b = y;
        }
        
        void getData(){
            cout<<"a is: "<<a<<" and b is: "<<b<<endl;
        }

        friend class1 operator+(class1 c1, class2 c2);
};

class class2{
    int a, b;
    public:
        class2(int x=0, int y=0){
            a = x;
            b = y;
        }
        void sum(){
            cout<< "addition of a and b is " << a + b << endl;
        }
        void getData(){
            cout<<"a is: "<<a<<" and b is: "<<b<<endl;
        }
        friend class1 operator+(class1 c1, class2 c2);
};

class1 operator+(class1 c1, class2 c2){
    class1 temp;
    temp.a = c1.a + c2.a;
    temp.b = c1.b + c2.b;
    return temp;
}

int main(){
    class1 c1(10,20);
    c1.getData();

    class2 c2(30,40);
    c2.getData();

    class1 c3 = c1 + c2; //first method to friend function invoke operator overloading
    // class1 c3 = operator+(c1, c2); //second method to friend function invoke operator overloading
    c3.getData();
    
    return 0;
}