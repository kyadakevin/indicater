#include<stdio.h>

main()
{
	int a,b;
	a=30;
	b=40;
	
	int *p1,*p2;
	p1=&a;
	p2=&b;
		
	int *temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	
	printf("swaping of A =%d\n",*p1);
	printf("swaping of B =%d\n",*p2);
}


	

