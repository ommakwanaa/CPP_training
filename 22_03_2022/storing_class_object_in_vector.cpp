#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class dailytemp{
    int temp;
    public:
    dailytemp(){temp = 0;}
    dailytemp(int x){temp = x;}
    dailytemp &operator =(int x){
    temp =x; 
    return  *this;
    }
    double get_temp(){return temp;}
};
bool operator<(dailytemp a,dailytemp b){
    return a.get_temp()<b.get_temp();

}
bool operator==(dailytemp a,dailytemp b){
    return a.get_temp()==b.get_temp();

}
int main(){
    vector<dailytemp> v;
    int i;
    for (int i = 0; i < 7; i++)
    {
        v.push_back(dailytemp(60+rand()%30));
        
    }
    cout<<"farenheit temperature: \n";
     for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].get_temp()<<" ";
        } 
    cout<<endl;  
    for (int i = 0; i < v.size(); i++)
    {
        v[i]=(v[i].get_temp()-32)*5/9;
    }
    cout<<"centigrade temperature: \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].get_temp()<<" ";
        }
return 0;
}