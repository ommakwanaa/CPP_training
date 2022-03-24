#include <iostream>
#include <string.h>
#include<map>
using namespace std;
class name
{
    char str[40];

public:
    name() { strcpy(str, ""); }
    name(char *s) { strcpy(str, s); }
    char *get() { return str; }
};
bool operator<(name a, name b)
{
    return strcmp(a.get(), b.get()) < 0;
}
class phoneNum
{
    char str[80];

public:
    phoneNum()
    {
        strcpy(str, "");
    }
    phoneNum(char *s)
    {
        strcpy(str, s);
    }
    char *get()
    {
        return str;
    }
};
int main()
{
    map<name,phoneNum>directory;
    directory.insert(pair<name,phoneNum>(name("emp1"),phoneNum("222222222")));
    directory.insert(pair<name,phoneNum>(name("emp2"),phoneNum("4444444444")));
    directory.insert(pair<name,phoneNum>(name("emp3"),phoneNum("9999999999")));
    char str[80];
    cout<<"enter name :";
    cin>>str;
    map<name,phoneNum>::iterator p;
    p= directory.find(name(str));
    if (p!=directory.end())
    {
        cout<<"phone number: "<<p->second.get();

    }
    else
    {
        cout<<"name is not in dictionary"<<endl;
    }
    
    

    return 0;
}