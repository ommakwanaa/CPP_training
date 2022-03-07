//inheritance

#include <iostream>
using namespace std;

class person {
    int age, weight, height;
    public:

    void eat() {
        cout << "I can eat" << endl;
    }

    void sleep() {
        cout << "I can sleep" << endl;
    }
    void talk() {
        cout << "I can talk" << endl;
    }

};

class doctor : public person {
 
   public:
    void diagnose() {
        cout << "i am doctor. \nI can check " << endl;
    }};
class wardboy : public doctor {
 
   public:
    void ward() {
        cout << "i am a wardboy. \nI can crack bones " << endl;
    }};



int main() {

    doctor steve;
    steve.diagnose();
    steve.eat();
    steve.sleep();
    steve.talk();
    steve.diagnose();

    wardboy mukesh;
    mukesh.ward();
    mukesh.eat();
    mukesh.sleep();
    mukesh.talk();   
    mukesh.diagnose();


    return 0;
}