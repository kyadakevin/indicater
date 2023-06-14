#include<stdio.h>

main()
{
	int a[100];
	int *p[100];
	int n,i;
	printf("enter value of arry =");
	scanf("%d",&n);
	
  printf("Enter elements in array= ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
	for(i=0; i<n; i++)
    {
        p[i]=&a[i];
        printf("velue of arry=%d\n",*p[i]);
    }
	
	
	
}
