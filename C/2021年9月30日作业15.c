#include <stdio.h>
int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    if((a=='S'&&b=='C')||(a=='C'&&b=='R')||(a=='R'&&b=='S'))
        printf("Alice");
    else if((b=='S'&&a=='C')||(b=='C'&&a=='R')||(b=='R'&&a=='S'))
        printf("Bob");
    else if(a==b)
        printf("Tie");
    else printf("error");
    return 0;
}