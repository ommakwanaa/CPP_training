#include <iostream>
using namespace std;
int fact(int m)

{

    int res = 1;

    for (int i = 2; i <= m; i++)

        res = res * i;

    return res;
}

int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int fact(int m)
{
    int res = 1;
    for (int i = 2; i <= m; i++)
        res = res * i;
    return res;
}

int main()
{
    int w, r, b;
    cout << "enter  no. of white ball, red ball and no. of bag\n";
    cin >> w >> r >> b;
    int h = ncr(b, w);
    // cout<<h<<endl;
    int c = w + r / 2;
    int count = 0;
    while (!(b > c))
    {

        // cout<<(h/w);
        int ans = h / w;
        count = ans;
        // cout<<count;
        break;
    }

    cout << count << endl;
}


