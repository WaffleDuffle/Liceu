#include <iostream>

using namespace std;
void putere(int n, int &d, int &p)
{
    p = -1;
    int f = 2;
    while(n > 1)
    {
        int p1 = 0;
        while(!(n%f))
        {
            p1++;
            n /= f;
        }
        if(p <= p1)
        {
            p = p1;
            d = f;
        }
        f++;
    }
    cout << d << " " << p;
}
int main()
{
    int d, p;
    putere(10780,d,p);
    return 0;
}
