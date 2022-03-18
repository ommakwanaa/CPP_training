#include <iostream>
using namespace std;
class base
{

public:
    class show{
        public:
        void print1(){
            cout<<"the subclass"<<endl;
        }

    };
};
class delivered : public base{};
int main()
{
    delivered t2;
    base :: show st;
    st.print1();

    return 0;
}