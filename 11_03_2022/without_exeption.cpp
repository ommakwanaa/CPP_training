#include <iostream>
using namespace std;

int main()
{
    int n1, n2,result;
    n1 = 100;
    n2 =20;
    try{
    if(n2==0){
        throw n2;
    }
    
    else{
        result = n1/n2;
        cout<<"\nthe result is :"<<result;
    }}
    catch (int n2){
        cout<<"cant devide by "<<n2;
    }
    return 0;
}