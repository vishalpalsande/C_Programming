/*	Spiral Matrix Print Number

Data is:
1	2	3	4	5	
6	7	8	9	10	
11	12	13	14	15	
16	17	18	19	20	
21	22	23	24	25	

o/p:-
1 2 3 4 5 10 15 20 25 24 23 22 21 16 11 6 7 8 9 14 19 18 17 12 13 

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int **arr = NULL;
	
	int row=0,col=0;
	
	printf("Enter number of rows:");
	
	scanf("%d",&row);
	
	printf("Enter number of columns:");
	scanf("%d",&col);
	
	arr = (int **)malloc(row * sizeof(int*));
	
	for(int i=0;i<col;i++)
	{
		arr[i] = (int*)malloc(col*sizeof(int));
	}
	
	printf("Enter the data:\n");
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	
	printf("Data is:\n");
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	int x = col*row;
	int m=0,n=0,j=0,r=0;
	col--,row--;
	
	while(m<=col && n<=row)
	{
		for(j=m; j<=col; j++)
		{
			printf("%d ",arr[m][j]);
			r++;
		}
		m++;
		
		if(r<=x)
		{
			for(j=m;j<=row;j++)
			{
				printf("%d ",arr[j][col]);
				r++;
			}
			col--;
		}
		
		if(r<x)
		{
			for(j=col;j>=n;j--)
			{
				printf("%d ",arr[row][j]);
				r++;
			}
			row--;
		}
		
		
		if(r<x)
		{
			for(j=row; j>=m; j--)
			{
				printf("%d ",arr[j][n]);
				r++;
			}
			n++;
		}
	}
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
