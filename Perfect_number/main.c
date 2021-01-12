//Problem Statement:- Check number is perfect number or not.

#include"header.h"

int main()
{
	int iNum=0;
	BOOL bRet = FALSE;
	printf("Enter any number: ");
	scanf("%d",&iNum);
	
	bRet = perfect(iNum);

	if(bRet == TRUE)
	{
		printf("Number is Perfect\n");
	}
	else
	{
		printf("Number is NOT Perfect\n");
	}

	return 0;
	
}
