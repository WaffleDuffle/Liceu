#include <iostream>

using namespace std;
void citire(int v[], int n)
{
    int i;
    if(n)
        citire(v, n-1);
        cin>>v[i];
}
int cautare_binara(int v[], int p, int u, int x)
{
    if(p>u)
        return 0;
    else
    {
        int m=(p+u)/2;
        if(x<v[m])
            return cautare_binara(v, p, m, x);
        else
            if(x>v[m])
            return cautare_binara(v, m+1, u, x);
        else
            return 1;
    }
}
int main()
{
    int v[100], n;
    cin>>n;
    citire(v,n);
    int x;
    cin>>x;
    if(cautare_binara(v,1,n,x)==1)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
