#include<iostream>
using namespace std;
class trial{
	private:
	int feet, inch;
	public:
//Default Constructor
	trial(){
		feet=10;
		inch=100;
		cout<<"Deault Constructor"<<endl<<"feet= "<< feet <<endl<<"inch= "<< inch << endl<<endl;
	}
//parameterized Constructor
	trial(int f, int i){
		feet=f;
		inch=i;
		cout<<"Parameterized Constructor"<<endl<<"feet= "<< feet <<endl<<"inch= "<< inch << endl<<endl;
	}
//copy Constructor
	trial(trial &x){
		feet=x.feet;
		inch=x.inch;
		cout<<"Copy Constructor"<<endl<<"feet= "<< feet <<endl<<"inch= "<< inch << endl<<endl;
	}
};
int main(){
	trial d1;
	trial d2(20,30);
	trial d3=d1;
	trial d4=d2;
}