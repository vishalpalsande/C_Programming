#include"header.h"

BOOL pali(int num)
{
	int x=0,rev= 0;
	
	if(num < 0)
	{
		num = -num;
	}
	
	rev = num;
	
	while(num != 0 )
	{
		x = (x*10)+ num%10;
		num = num/10;
	}
	
	if(x == rev)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
