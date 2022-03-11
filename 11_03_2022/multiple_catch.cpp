#include <iostream>
using namespace std;

int main()
{
    int n1;
    n1 = 2.5;
    try
    {
        if (n1==1)
        {
            throw n1;
        }
        else if (n1 == 2)
        {
            throw 'A';
        }
        else if (n1 == 2.5)
        {
            throw 5.5;
        }
        
    }
    
    catch (char n1){
        cout<<"char value";

    }
    catch (int n1){
        cout<<"int value";

    }
    catch (double n1){
        cout<<"float value";

    }


}