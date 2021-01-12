#include"header.h"

BOOL pali(char *str)
{
	int x= 0,i = 0;	
	
	if(str == NULL)
		return -1;
	
	while(str[x]!='\0')
		x++;
	x--;
		
	while(i < x)
	{
		if(str[i] != str[x])
			break;
		i++;
		x--;
	}
	
	if(i>=x)
		return TRUE;
	else
		return FALSE;
}
