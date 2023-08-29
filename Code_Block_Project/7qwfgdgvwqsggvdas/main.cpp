#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int main()
{
    int x,a,maxi = -1,nr = 1, k = 1;
    f >> a;
    while(f >> x)
    {
        if(maxi == nr)
            k++;
        if(a%2 == x%2)
            nr++;
        else
        {
            if(maxi < nr)
            {
                maxi = nr;
                k = 1;
            }
            nr = 1;
        }
        a = x;
    }
    if(maxi == nr)
        k++;
    cout << k << " " << maxi;
    f.close();
    return 0;

}
