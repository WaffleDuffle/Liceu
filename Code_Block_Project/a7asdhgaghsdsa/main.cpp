#include <iostream>

using namespace std;
void schimb(int n, int x, int p)
{
    int m = n;
    int y = 10;
    while(m)
    {
        if(p == 0)
        {
            n = (n/y*10 + x)*(y/10)+n%(y/10);
        }
        y*=10;
        p--;
        m/=10;
    }
    cout << n;
}

int main()
{
    schimb(12587,9,2);
    return 0;
}
