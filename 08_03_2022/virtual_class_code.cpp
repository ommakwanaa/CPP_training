#include<iostream>
using namespace std;
class a{
    public:
    int i;
    
};
class b : virtual public a{
    public:
    int j;
    
};
class c : public virtual a{
    public:
    int k;
    
} ; 
class d : public b, public c{
    public:
    int sum;
    
};

int main(){
d ob;
ob.i = 10;
ob.j = 23;
ob.k = 20;
ob.sum = ob.i+ob.j+ob.k;
cout<<"sum is "<<ob.sum<<endl;

return 0;
}