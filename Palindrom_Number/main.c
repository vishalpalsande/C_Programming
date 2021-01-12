// Problem Statement:- Check Number is Plalindrome or not

#include"header.h"

int main()
{
	int iNum = 0;
	BOOL bRet = FALSE;
	
	printf("Enter any number: ");
	scanf("%d",&iNum);
	
	bRet = pali(iNum);
	
	if(bRet == TRUE)
	{
		printf("Number is palindrome\n");
	}
	else
	{
		printf("Number is NOT palindrome\n");
	}
	
	return 0;
}
