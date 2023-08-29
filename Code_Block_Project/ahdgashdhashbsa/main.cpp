#include <iostream>

using namespace std;
int v[100],n,x,y,i,a,k,rez;
int main()
{
    cin >> n >> x >> y;
    for(i = 1 ; i<= n ; i++)
        v[i] = i*10;
    for(i = 1 ; i<= n ; i++)
        cout << v[i] << " ";
    a = v[x];
    v[x]=v[y];
    v[y] = a;
    k=1;
    rez=0;
    while(k==1)
    {
        k=0;
        i=1;
        while(i<n)
        {
            if(v[i] > v[i+1])
            {
                a=v[i];
                v[i]=v[i+1];
                v[i+1]=a;
            }
            i++;
            rez++;
        }
    }
    cout << rez;
    return 0;
}
