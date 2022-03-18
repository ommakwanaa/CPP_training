#include <iostream>

using namespace std;

class test{
    int x;
    public:
    void read(){
        cout<<"enter a number"<<endl;
        cin>>x;
    }
    class even{};
    class odd{};
    void check(){
        if (x%2==0)
        {
            throw even();
        }
        else{
            throw odd();
        }
        
    }
};

int main()
{
    test d2;
    d2.read();
    try{
    d2.check();
    }
    catch(test::even){
        cout<<"number is even";
    }
    catch(test::odd){
        cout<<"number is odd";
    }
    
    return 0;
}