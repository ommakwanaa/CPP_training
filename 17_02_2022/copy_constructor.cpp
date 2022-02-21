#include<iostream>
using namespace std;

class trial{
	int m,n;
	public:
	trial(int x,int y){
		m=x;
		n=y;
		cout<<"Parameterized Constructor"<<endl;
	}
	trial(trial &x){
		m=x.m;
		n=x.n;
		cout<<"Copy Constructor"<<endl;
	}
};
int main(){
	trial obj1(5,6);
	trial obj2(obj1);
}