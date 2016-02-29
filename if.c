/*Demo of if condition*/
#include <stdio.h>
int main()
{
    int i;
    printf("Enter your age\n");
    scanf("%d",&i);
    if(i<=17)
    {
        printf("You are a child\n");
        printf("So Enjoy life\n");
    }
    printf("You have to work hard for your future, you are not a child");
    return 0;
}
