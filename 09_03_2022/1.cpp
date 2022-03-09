//ommakwana07

#include<iostream>
using namespace std;
class base1{
    protected:
    int i;
    public:
    base1(int x){i = x;cout<<"\nconstructing basel"<<" "<<x<<endl;}
    ~base1(){cout<<"\ndconstructing basel";}
};
class base2{
    protected:
    int k;
    public:
    base2(int x){k = x;cout<<"\nconstructing basel"<<" "<<x<<endl;}
    ~base2(){cout<<"\ndconstructing basel";}
};
class
 derived : public base1 , public base2{
    int j;
    int y,z;
    public:
    derived(int x,int y, int z) : base1(y),base2(z) //passing value in constructor of base class
    {j = x ; cout << "\nderived parametrized constructor call";}
    ~derived(){cout<<"\nderived default Dstructor";}
    void show()
    {
        cout <<"\n"<< j << " " << i << " " << k << endl;
    }
};

int main(){
    derived d2(9,10,11);
    d2.show();
    return 0;
}