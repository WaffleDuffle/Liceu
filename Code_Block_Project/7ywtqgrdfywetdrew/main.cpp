#include <iostream>
#include <cstring>
using namespace std;
char s[20], a[20], *p;
int main()
{
    strcpy(s,"test informatica");
    strtok(s," ");
    strcpy(a,"informatica testul");

    p = strtok(NULL, " ");
    cout << p;
    return 0;
}
