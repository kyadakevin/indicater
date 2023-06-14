#include <stdio.h>  
int main()  
{  
    int *p1, *p2;  
    int n, i, temp;  
    printf("Enter the size of the array: ");  
    scanf("%d", &n);  
    int arr[n];
	  
    printf("Enter the elements into the array: ");  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    p1 = &arr[0];  
    p2 = &(arr[n - 1]);  
      
    while(p1 < p2)  
    {  
        temp = *p1;  
        *p1 = *p2;  
        *p2 = temp;  
       p1 = p1 + 1;  
        p2 = p2 - 1;  
    }  
    printf("The reversed array: ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", arr[i]);  
    }  
      
}  
