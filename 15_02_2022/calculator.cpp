#include<iostream>

using namespace std;
class calculator{
public:
int input1,input2;
void setinput(int a, int b){
input1=a;
input2=b;}
int add(int input1) {
return input1+input2;
}
int mul() {
return input1*input2;
}
int sub() {
return input1-input2;
}
int div();
};
int calculator :: div() {
return input1/input2;
}
int main(){
calculator obj1;
int x1,x2;
cout << "Enter number a :\n";
cin >> x1;
cout << "Enter number b :\n";
cin >> x2;
obj1.setinput(x1,x2);
int o;
cout << "PRESS 1 > multiplication\nPRESS 2 > Addition\nPRESS 3 > substraction\nPRESS 4 > Division\n";
cin >> o;
switch (o)
{
case 1:
    cout << "the multiplication of input is " << obj1.mul() << "\n";
    break;
case 2:
    cout << "the addition of input is " << obj1.add(1000) << "\n";
    break;
case 3:
    cout << "the substraction of input is " << obj1.sub() << "\n";
    break;
case 4:
    cout << "the division of input is " << obj1.div() << "\n";
    break;

default:
    break;
}

return 0;
}
