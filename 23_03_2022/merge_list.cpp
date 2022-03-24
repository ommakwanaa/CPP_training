#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>lst;
    list<int>lstt;
    
    for (int i = 0; i < 5; i++)
    {
        lstt.push_back(i+100);
    }
    for (int i = 0; i < 5; i++)
    {
        lst.push_back(rand()%10);
    }
    cout << "size 1 = "<<lst.size()<<endl<< "size 2 = "<<lst.size()<<endl;
    cout<<"contents\n"<<endl;
    list<int>::iterator p =lst.begin();
    list<int>::iterator p1 =lstt.begin();
    cout<<"list1\n";
    while (p!=lst.end())
    {
        cout<<*p<<"  ";
        p++;
    }
    cout<<"\nlist2\n";
    while (p1!=lstt.end())
    {
        cout<<*p1<<"  ";
        p1++;
    }
    lst.merge(lstt);
    cout<<"\n\n";
    cout<<"merge\n";
    lst.sort();
    p = lst.begin();
    while (p!=lst.end())
    {
        cout<<*p<<"  ";
        p++;
    }
    
return 0;
}