#include"header.h"

void pali(int *arr,int n)
{
	int x=0,rev=0;
	
	if(arr == NULL || n<=0)
		return;
	
	printf("\nPalindromes numbers are:\n");	
	for(int i=0;i<n;i++)
	{
		rev = 0;
		x=arr[i];
			while(arr[i]!=0)
			{
				rev = rev*10 + arr[i]%10;
				arr[i] = arr[i] / 10;
			}
		if(x == rev)
			printf("%d\n",x);
	}
	
}
