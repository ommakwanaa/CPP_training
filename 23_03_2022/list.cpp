#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>lst;
    for (int i = 0; i < 10; i++)
    {
        lst.push_back(i+100);
    }
    cout << "size = "<<lst.size()<<endl;
    cout<<"contents\n"<<endl;
    list<int>::iterator p =lst.begin();
    while (p!=lst.end())
    {
        cout<<*p<<"  ";
        p++;
    }
    cout<<"\n\n";
    p = lst.begin();
    while (p!=lst.end())
    {
        *p = *p+100;
        p++;
    }
    cout<<"contents modifies\n";
    p = lst.begin();
    while (p!=lst.end())
    {
        cout<<*p<<"  ";
        p++;
    }
    cout<<"reverse contents modifies\n";
    p = lst.end();
    while (p!=lst.begin())
    {
        --p;
        cout<<*p<<"  ";
        
    }
    
return 0;
}