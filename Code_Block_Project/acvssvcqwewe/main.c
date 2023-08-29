#include <stdio.h>
int main()
{
    char s[11],t[11];
    int v[25];
    scanf("%s%s",&s,&t);
    int x;
    for(int i = 0 ; s[i] ; i++)
    {
        x = (int)s[i] - 97;
        printf("%d ", x);
        if(!v[x])
        {
            for(int j = 0 ; t[j] ; j++)
            {
                if(s[i] == t[j])
                    v[x]++;
            }

        }
    }
}
