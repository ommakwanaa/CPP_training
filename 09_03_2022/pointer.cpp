//ommakwana07

#include<iostream>
using namespace std;
class demo{
 int i ;
 public:
 demo (int x){
     i =x;}
     int getdata(int x){
         return i+x; }
 };
int main(){
    demo d[3] = {11,22,33};
    demo *ptr = d; // similar to *ptr=&d[0]
    for (int i = 0; i < 3; i++)
    {
        cout<<ptr->getdata(10)<<endl;
        ptr++;
    }
    

return 0;
}