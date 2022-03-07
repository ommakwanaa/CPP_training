// demo program for deallocation of memory
#include <iostream>
using namespace std;
class location{ //creating class
    int lon, lat;
    public:
    location(int a, int b){//default constructor
        lon=a;
        lat=b;
    }
    void display(){
        cout<<"Coordinates are, lon: "<<lon<<" lat: "<<lat<<endl;
    }
    void * operator new(size_t byte){
        void *ptr;
        cout<<"Inside the overload new"<<endl;
        ptr=malloc(byte);
        if(ptr==NULL){
            cout<<"could not allocate memory\n";
            exit;
            
        }
        return ptr;
    }
    void operator delete(void *ptr){
        cout<<"Inside the overloaded delete"<<endl;
        free(ptr);
    }
};
int main()
{
    location l2(10,5);
    l2.display();
    
    location *loc = new location(2,2);
    loc->display();
    delete loc;
    return 0;
}