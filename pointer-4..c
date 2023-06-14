#include<stdio.h>

main()
{

char ch[100];
char *p;

 int i,n;
 printf("enter string =");
 gets(ch);

 p = &ch;

printf("string lenths = %d",strlen(p));
}
