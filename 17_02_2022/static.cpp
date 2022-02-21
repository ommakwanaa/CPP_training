#include<iostream>
using namespace std;
class staticMember{
	private:
		static int A;
	public:
		static void display(){
			A+=111;

			cout<<"Value of A: "<< A << endl;

		}
};
int staticMember :: A;

int main(){
	cout << "Print static member through class name: " << endl;
	staticMember::display();
	cout << "Print static member through class name: " << endl;
	staticMember::display();

	return 0;
}