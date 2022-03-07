// basic type to class type conversion

#include<iostream>

using namespace std;

class Time{
    int hour, min;
    public:

    Time(){
        cout<<"default constructer called"<<endl;
    }
        Time(int a){
            cout<<"inside the time constructor"<<endl;
            hour = a/60;
            min = a%60;
        }

        void display(){
            cout<<"hour: "<<hour<<" minute: "<<min<<endl;
        }
};

int main(){
    int x = 90;
    Time t1;
    t1 = x;
    t1.display();
    return 0;
}