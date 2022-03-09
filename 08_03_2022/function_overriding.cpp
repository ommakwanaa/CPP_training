#include<iostream>
using namespace std;
class abc{
    public:
    void display(){
        cout<<"\nthis is parent class";
    }
};
class xyz : public abc{
    public:
    void display(int x,string s){
        cout<<"\nthis is child class "<<s<<x<<endl;
    }
};
int main(){
    xyz x;
    x.display(3,"om");
    x.abc::display();
return 0;
}