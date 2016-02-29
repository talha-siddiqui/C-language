#include <stdio.h>
int main()
{
    char a;
    int num;
    do
    {
        printf("Enter any number\n its tell your future");
        scanf("%d",&num);
        if(num==1)
        {
            printf("you will become an Engineer");
        }
        else if(num==2)
        {
            printf("You will become a Doctor");
        }
        else if(num==3)
            {
                printf("You will become a Honest Man");
            }

         else if (num==4)
         {
          printf("You will become a fool");
    }
    else if(num==5)
    {
        printf("You are a Programmer");
    }
    else
    {
        printf("You are fool");
    }
    printf("Want to select another number y/n\n");
    scanf("%c",&a);
}while(a=='y');
return 0;
}
