#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<char> v(10);
    vector<char>::iterator p;
    int i;
    p = v.begin();
    i = 0;
    while (p!=v.end())
    {
        *p =i+'a';
        p++;
        i++;
    }
    cout<<"orignal contents of vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        v[i]=toupper(v[i]);
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
    
    
    
}