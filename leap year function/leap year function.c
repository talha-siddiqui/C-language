#include <stdio.h>
int lepyr(int);
int main()
{
    int y,a;
    printf("Enter year=");
    scanf("%d",&y);
    printf("\n");
    a=lepyr(y);
    if(a==0)
    {
        printf("This year is leap year.");
    }
    else
    {
        printf("This year is not leap year.");
    }
    return 0;
}
int lepyr(x)
{
    return(x%4);
}
