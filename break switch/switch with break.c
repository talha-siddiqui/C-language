//switch with break
#include <stdio.h>
int main()
{
    int i;
    printf("Enter Any number ");
    scanf("%d",&i);

    switch(i)
    {


  case 1:
    {
        printf("you are fool");
        break;
     }
  case 2:
    {
        printf("you are donkey");
        break;
     }
  case 3:
    {
        printf("you are frog");
        break;
     }
  default:
    {
        printf("you are human");
     }
    }
    return 0;
}
