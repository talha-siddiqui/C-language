#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet a,b,c\n");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'A':
    case 'a':
        {
            printf("fool");
            break;
        }
    case'B':
    case'b':
        {
            printf("Mad");
            break;
        }
    case'C':
    case'c':
        {
            printf("Alone");
            break;
        }
    default:
        {
            printf("Human");
        }
        return 0;
    }
}
