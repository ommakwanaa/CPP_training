#include <iostream>

using namespace std;

class measure{
    public:
        int l, b, h;
        void setDimentions(int x, int y, int z){
            l = x;
            b = y;
            h = z;
        }
        int area(){
            return l*b;
        }
        int volume(){
            return l*b*h;
        }
};

int main(){
    measure measure1, measure2;
    cout << "enter the length of home-1: ";
    int l1;
    cin >> l1;

    cout << "\nenter the breadth of home-1: ";
    int b1;
    cin >> b1;

    cout << "\nenter the height of home-1: ";
    int h1;
    cin >> h1;

    cout << "\n\nenter the length of home-2: ";
    int l2;
    cin >> l2;

    cout << "\nenter the breadth of home-2: ";
    int b2;
    cin >> b2;

    cout << "\nenter the height of home-2: ";
    int h2;
    cin >> h2;


    measure1.setDimentions(l1,b1,h1);
    measure2.setDimentions(l2,b2,h2);

    cout << "\nenter 1 for area and 2 for volume: ";
    int op;
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "area of home-1 is " << measure1.area() << "\n";
        cout << "area of home-2 is " << measure2.area() << "\n";
        break;

    case 2:
        cout << "area of home-1 is " << measure1.volume() << "\n";
        cout << "area of home-2 is " << measure2.volume() << "\n";

    default:
        break;
    }

    return 0;
}