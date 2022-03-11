#include<iostream>
using namespace std;
class shape{
    protected:
    float x;
    public:
    void getdata(){cin>>x;}
    virtual float calculatearea()=0;

};
class square : public shape{
    public:
    float calculatearea(){
        return x*x;
    }
};
class circle : public shape{
    public:
    float calculatearea(){
        return x*3.14;
    }
};
int main(){
    float res;
    square on2;
    on2.getdata();
    res = on2.calculatearea();
    cout<<res<<endl;
    circle on3;
    on3.getdata();
    res = on3.calculatearea();
    cout<<res<<endl;
    return 0;
}