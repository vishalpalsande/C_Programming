//problem statement:- Count the number of  palindrom strings.

#include<stdio.h>
#include<string.h>

int main()
{
	char str[10][20];
	
	int s=0,j=0,iCnt = 0;
	
	printf("You can enter maximum 10 strings\nEnter the strings\n");
	for(int i=0; i<10; i++)
	{
		scanf("%s",str[i]);
		if( strcmp(str[i],"-1") == 0 )
			break;
	}
	
	printf("\nPalindrom strings are: \n");
	for(int i=0; i < 10 ;i++)
	{
		if( strcmp(str[i],"-1") == 0 )
			break;
			
		j=0,s=0;
			
		while(str[i][j] != '\0')
		{
			j++;
		}
		j--;
		
		while(s<j)
		{
			if(str[i][s] != str[i][j])
				break;
			s++;
			j--;
		}
		
		if(s>=j)
		{
			iCnt++;
			printf("%s\n",str[i]);
		}
	}
	
	printf("\nNumber of palindrome strings are: %d\n",iCnt);
	
	return 0;
}

