#include <stdio.h>
int main()
{
    int i,j;
    for(i=1 ; i<=2 ; i=i+1)
    {
        for(j=1 ; j<=2 ; j=j+1)
        {
            if(i==j)
                continue;
            printf("%d%d\n",i,j);
        }
    }
    return 0;
}
