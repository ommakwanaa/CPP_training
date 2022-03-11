#include <iostream>
using namespace std;

int main()
{
    int n1, n2,result;
    n1 = 0;
    n2 =0;
    try{
    if(n2!=n1){
        float result = (float)n1/n2;
        if(result<0){
            throw 'e';
            
        }
        cout<<"n1/n2= "<<result;        
    }
    else{
        throw n2;
    }
    }
    catch (char st){
        cout<<"division is less than 1";

    }
    catch (int e){
        cout<<"division by 0";

    }
    catch (...){
        cout<<"uknown";

    }


}