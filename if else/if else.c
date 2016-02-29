#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    float t,r,y,q;

    printf("Enter Marks of English =");
    scanf("%d",&a);
    printf("Enter Marks of Urdu =");
    scanf("%d",&b);
    printf("Enter Marks of Math =");
    scanf("%d",&c);
    printf("Enter Marks of Physics =");
    scanf("%d",&d);
    printf("Enter Marks of Chemistry =");
    scanf("%d",&e);

    printf("Enter Total Marks =");
    scanf("%f",&q);

    t=a+b+c+d+e;
    r=t/q;
    y=r*100;

    printf("Your percentage is = %f\n",y);

    if(y>=90)
    {
        printf("Grade A+");
    }
    else if(y>=80)
    {
        printf("Grade A");
    }
    else if(y>=70)
    {
        printf("Grade B");
    }
    else if(y>=60)
    {
        printf("Grade C");
    }
    else if(y>=45)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
