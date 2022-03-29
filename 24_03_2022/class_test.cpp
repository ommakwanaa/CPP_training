
#include <deque>
#include <iostream>

using namespace std;

void DisplayQueue(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); it++)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
    deque<int> gquiz;
    int nq, ns;
    cout << "enter size of queue:";
    cin >> nq;
    cout << "\nEnter size of subset:";
    cin >> ns;
    for (int i = 0; i <= nq; i++)
    {
        cin >> i;
        gquiz.push_back(i);
    }

    DisplayQueue(gquiz);
    return 0;
}