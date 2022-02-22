#include <iostream>

using namespace std;

// inline function
inline int cube(int x){
    return x*x*x;
}

int cubeVolume(int l=1, int w=1, int h=1){ //declaration should be from right to left<--
    return l*w*h;
}

int main(){
    cout<<"cube of the number 10 is "<<cube(10)<<endl;
    cout<<cubeVolume()<<endl;
    cout<<cubeVolume(1)<<endl;
    cout<<cubeVolume(1,2)<<endl;
    cout<<cubeVolume(1,2,3)<<endl;
    return 0;
}


// inline function call is not actually a function call it will replace the cube(3) with the content inside function named cube