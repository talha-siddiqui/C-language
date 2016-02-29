#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    printf("Enter any number\n");
    scanf("%d",&i);

    if (i<=5)
        goto sos;
    else
    {
        printf("you loss\n");
        printf("try again");
        exit(1);// program execution terminator

    }
    sos:
        {
            printf("you won");
        }
        return 0;
}
