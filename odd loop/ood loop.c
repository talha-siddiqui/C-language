//Execution of number for unknown number of times.
#include <stdio.h>
int main()
{
    char another;
    int num;
    do
    {
        printf("Enter a number\n");
        scanf("%d",&num);
        printf("Square of %d is %d\n",num,num*num);
        printf("Want to Enter another number y/n\n");
        fflush(stdin);
        scanf("%c",&another);
    }while(another=='y');
    return 0;
}
