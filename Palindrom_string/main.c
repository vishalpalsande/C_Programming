// Problem statement:- String is palindrom or not

#include"header.h"

int main()
{
	char arr[30] ;
	BOOL bRet = FALSE;
	
	printf("Enter any string: ");
	scanf("%[^'\n']s",arr);
	
	bRet = pali(arr);
	
	if(bRet == TRUE)
	{
		printf("String is palindrome\n");
	}
	else
	{
		printf("String is NOT palindrome\n");
	}
	
	return 0;
}
