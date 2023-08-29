#include <iostream>

using namespace std;
void f(int &n)
{
    int m = n, p = 10;
    while(m)
    {
        if(m%10 == 2 && m/10%10 == 2)
            n = n/p*p + n%(p/10);
        p *= 10;
        m /= 10;
    }
    cout << n;
}
int main()
{
    int n = 202233228;
    f(n);
    return 0;
}
