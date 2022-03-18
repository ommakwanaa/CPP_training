#include<iostream>
#include<exception>

using namespace std;

int main(){
    try {
        int *myarray =  new int[1000000000000000000];
        cout<<"my array";
    }
    catch(exception &e){
        cout << "std exeption"<< e.what()<<endl;
    }
    cout<<"exit";
return 0;
}