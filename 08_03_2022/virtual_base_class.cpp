// multiple inheritance

#include <iostream>
using namespace std;

class person
{
    int age, weight, height;

public:
    void eat()
    {
        cout << "I can eat" << endl;
    }

    void sleep()
    {
        cout << "I can sleep" << endl;
    }
    void talk()
    {
        cout << "I can talk" << endl;
    }
};

class doctor :public person
{

public:
    void diagnose()
    {
        cout << "i am doctor. \nI can check " << endl;
    }
};
class nurse :public person
{

public:
    void nursing()
    {
        talk();
        cout << "i am a nurse." << endl;
    }
};
class wardboy : public doctor, public nurse
{

public:
    void ward()
    {
        // nursing();
        cout << "i am a wardboy. \nI can crack bones " << endl;
    }
};

int main()
{
    wardboy mukesh;
    // mukesh.sleep();
    mukesh.nursing();//we can't directly access the Talk function so we written one method inside a Nurse function and this function contains calls Talk() internally, we can call methods from Nurse so this is how we can access the Talk() function


    // mukesh.ward();

    return 0;
}