/*Demo of while loop*/
#include <stdio.h>
int main()
{
    int i;
    printf("Enter Any Number\n");
    scanf("%d",&i);

    while(i<=10)
    {
        printf("%d\n",i);
        i=i+1;
    }
    return 0;
}
