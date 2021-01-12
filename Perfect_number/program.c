#include"header.h"

BOOL perfect(int num)
{
	int rev = 1,i = 2;
	
	if(num == 1|| num ==0)
		return FALSE;

	if(num < 0)
		num = -num;
					
	while( i <= (num/2) )
	{
		if( (num % i) == 0 )
		{
			printf("%d\t\n",i);
			rev = rev + i;
		}
			
		if(rev>num)
			break;
			
		i++;
	}		
	
	if(rev == num)
		return TRUE;
	else
		return FALSE;
}
