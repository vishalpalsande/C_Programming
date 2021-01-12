//Problem Statement:- Print the number of palindrom number in array

#include"header.h"

int main()
{
	int *arr='\0',n= 0;
	
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	arr = (int *)malloc(sizeof(int)*n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	pali(arr,n);

	return 0;
}
