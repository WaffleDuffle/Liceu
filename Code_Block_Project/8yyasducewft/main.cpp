#include <iostream>
#include <cstring>
using namespace std;
struct produs
{
    char denumire[50];
    float pret;
    int cantitate;
}x , y;
int main()
{
    cin.get(x.denumire , 50);
    cin >> x.pret >> x.cantitate;
    cin.get();
    cin.get(y.denumire , 50);
    cin >> y.pret >> y.cantitate;
    x.pret = x.pret + (19.00 * x.pret)/100;
    x.pret = (float)x.pret * x.cantitate;
    y.pret = y.pret + (19.00 * y.pret)/100;
    y.pret = (float)y.pret * y.cantitate;
    if(strcmp(x.denumire , y.denumire) > 0)
    {
        cout << y.denumire << " : " << y.pret << "\n";
        cout << x.denumire << " : " << x.pret;
    }
    else
    {
        cout << x.denumire << " : " << x.pret << "\n";
        cout << y.denumire << " : " << y.pret;
    }

    return 0;
}
