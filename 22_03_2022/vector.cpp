#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<char> v(10);
    int i;
    cout<< "size = "<< v.size()<<endl;
    for (int i = 0; i < 10; i++)
    {
        v[i]=i+'a';

    }
    cout<< "current contents: \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n\n";
    
    
}