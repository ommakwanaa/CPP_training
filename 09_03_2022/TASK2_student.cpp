//ommakwana07

#include<iostream>
using namespace std;
class student{
    int marks;
    string name;
    public:
    int rollno;
    void getdata(string n,int m,int roll){
        this->name = n;
        this->marks = m;
        this->rollno = roll;
    }
    void printdata(){
        cout<<"Name: "<<name<<endl<<"Roll No: "<<rollno<<endl<<"Marks: "<<marks<<endl<<endl<<endl;
    }
};
class stu: public student{
    public:
    void print(){
        printdata();
    }

    
};
int main(){

    stu d[3];
    stu *ptr = d; // similar to *ptr=&d[0]

    ptr->getdata("om",100,7);
    ptr++;
    ptr->getdata("yash",99,8);
    ptr++;
    ptr->getdata("nirmal",98,9);
    ptr++;

    ptr = &d[0];
    for (int i = 0; i < 3; i++)
    {
        ptr->printdata();
        ptr++;
    }
    return 0;
}