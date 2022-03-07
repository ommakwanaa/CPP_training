// inheritance

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

class doctor : public person
{

public:
    void diagnose()
    {
        cout << "i am doctor. \nI can check " << endl;
    }
};
class nurse : public person
{

public:
    void nursing()
    {
        cout << "i am a nurse." << endl;
    }
};
class wardboy : public doctor, public nurse
{

public:
    void ward()
    {
        cout << "i am a wardboy. \nI can crack bones " << endl;
    }
};

int main()
{
    wardboy mukesh;
    
    mukesh.nursing();
    mukesh.diagnose();

    return 0;
}