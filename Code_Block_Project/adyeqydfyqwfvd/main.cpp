#include <iostream>
using namespace std;
int n,st[20];
void afiseaza()
{
    for (int j=1;j<=3;j++)
        cout<<st[j]<<" ";
    cout<<"\n";
}
int valid(int k)
{
    for(int j=1;j<k;j++)
    if (st[j]==st[k])
            return 0;
    if(k == 2 && st[k] != 1)
            return 0;
    if(k == 2 && st[k] != 2)
            return 0;
    return 1;
}
void bktr(int k)
{
    int i;
    for(i=1;i<=n;i++)
    {
        st[k]=i;
        if (valid(k))
            if (k==3)
                afiseaza();
            else bktr(k+1);
    }
}
int main()
{
    n=6;
    bktr(1);
}
