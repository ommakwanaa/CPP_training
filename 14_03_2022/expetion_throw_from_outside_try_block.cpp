#include <iostream>

using namespace std;

void xtest(int test){
    cout<<"inside xtest test is:"<<test<<"\n";
    if(test){throw test;}
}

int main()
{
    cout<<"start"<<endl;
    try{
        cout<<"inside try block"<<endl;
        xtest(0);
        cout<<"exit222";
        xtest(1);
        xtest(2);
        cout<<"exit";
    }   
    catch(int i){
        cout<<"caught an expention value is = "<<i<<endl;
    }
    cout<<"exit";
    return 0;
}