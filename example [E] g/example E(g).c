#include <stdio.h>
int main()
{
    char a,b,c,d,e,f,g,h;

    printf("Enter Your Age\n");
    scanf("%d",&h);

    a='A''B''C''D''E''E''G''F''E''D''C''B''A';
    b='A''B''C''D''E''F''F'    'E''D''C''B''A';
    c='A''B''C''D''E'            'E''D''C''B''A';
    d='A''B''C''D'                    'D''C''B''A';
    e='A''B''C'                           'C''B''A';
    f='A''B'                                  'B''A';
    g='A'                                         'A';

    if(h==19);
    {
    printf("%c",&a);
    printf("%c",&b);
    printf("%c",&c);
    printf("%c",&d);
    printf("%c",&e);
    printf("%c",&f);
    printf("%c",&g);
    }
    return 0;
}
