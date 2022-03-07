//inheritance

#include <iostream>
using namespace std;

class person {
    int age, weight, height;
    string name;
    public:

    void eat() {
         cout << "I am"<< name << endl;
        cout << "I can eat" << endl;
    }

    void sleep() {
        cout << "I can sleep" << endl;
    }
    void talk() {
        cout << "I can talk" << endl;
    }
    // person(string a){

    //     name = a;
    // }

};

class doctor : public person {
 
   public:
    void diagnose() {
        cout << "i am doctor. \nI can check " << endl;
    }};
class buisnessman : public person {
 
   public:
    void deals() {
        cout << "i am a businessman. \nI can crack deals " << endl;
    }};

class footballer : public person {
 
   public:
    void play() {
        cout << "i am a footballer. \nI can play " << endl;
    }
    };



int main() {
    person om;

    om.eat();
    om.sleep();
    om.talk();

    doctor steve;
    steve.diagnose();
    steve.eat();
    steve.sleep();
    steve.talk();

    buisnessman mukesh;
    mukesh.deals();
    mukesh.eat();
    mukesh.sleep();
    mukesh.talk();   

    footballer messi;
    messi.play();
    messi.eat();
    messi.sleep();
    messi.talk();  



    return 0;
}