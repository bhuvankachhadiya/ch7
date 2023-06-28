#include<stdio.h>
#include<conio.h>
main()
{
int a=1,b=2,c=3,d=4;
clrscr();
(a>b)?(a>c)?printf("\na is big\n"):printf("\nc is big\n")
     :(a>d)?printf("\na2 is big\n"):printf("\nd is big\n");
(b>c)?(b>d)?printf("\nb2 is big\n"):printf("\nd2 is big\n")
     :
(c>d)?printf("\nc2 is big\n"):printf("\nd3 is big\n");
getch();
}