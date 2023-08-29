#include <iostream>

using namespace std;
bool ok = 1;
long long n;
int main()
{
    n = 2;
    while(n <= 10000000)
    {
        for(int i = 2 ; i <= n/2 ; i++)
            if(!(n%i))
                ok = 0;
        if(ok)
        {
            cout << n << " ";
            cout << "numarul este prim\n";
        }
        ok = 1;
        n++;
    }
    return 0;
}
