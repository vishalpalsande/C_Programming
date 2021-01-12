//Problem Statement:- Check Number is amstrong number or not

#include"header.h"

int main()
{
	int iNum=0;
	BOOL bRet = FALSE;
	
	printf("Enter any number: ");
	scanf("%d",&iNum);
	
	bRet = amstrong(iNum);
	
	if(bRet == TRUE)
	{
		printf("Number is Amstrong\n");
	}
	else
	{
		printf("Number is NOT amstrong\n");
	}
	
	return 0;
}
		
	
