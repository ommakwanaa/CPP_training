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
    cout<< "\nsimple: \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" \t";
    }
    v.insert(v.begin()+3,2,'z');
    cout<< "\nadding z: \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" \t";
    }
    cout<<"\n\n";

    v.erase(v.begin()+3,v.begin()+5);
    
    cout<< "current contents: \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" \t";
    }

    v.erase(v.begin()+8);
    
    cout<< "erase for single element i\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" \t";
    }
    cout<<"\n\n";
    
    
    
}