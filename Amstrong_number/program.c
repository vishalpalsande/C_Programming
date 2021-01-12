#include"header.h"

BOOL amstrong(int num)
{
	int x=0,j=0,rev=0;
	
	if(num<0)
	{
		 num = -num;
	}
	
	x = num;
	
	while(num!=0)
	{
		rev = num%10;
		if((j+rev*rev*rev) > x)
		{
			break;
		}
		else
		{
			j = j+ (rev*rev*rev);
		}
			
		num = num/10;
	}
	
	if(x == j)
		return TRUE;
	else
		return FALSE;		

} 
