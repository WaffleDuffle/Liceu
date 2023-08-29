#include <iostream>

using namespace std;
MAX factorial(MAX n)
{
    if(n == 0) return 1;
        else return n * factorial(n-1);
}
MAX n;
int main()
{
    cin>>n;
    cout<<factorial(n);
    return 0;
}
