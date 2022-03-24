#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>lst;
    for (int i = 0; i < 5; i++)
    {
        lst.push_back(i+100);
    }
    for (int i = 0; i < 5; i++)
    {
        lst.push_back(i+10);
    }
    for (int i = 0; i < 5; i++)
    {
        lst.push_back(i+20);
    }
    for (int i = 0; i < 5; i++)
    {
        lst.push_back(i+22);
    }
    for (int i = 0; i < 5; i++)
    {
        lst.push_back(rand()%10);
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
    cout<<"contents modifies\n";
    lst.sort();
    p = lst.begin();
    while (p!=lst.end())
    {
        cout<<*p<<"  ";
        p++;
    }
    
return 0;
}