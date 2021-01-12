/* Problem Statement:- WAP One-Dimensional Array, Two-Dimensional Array, Three-Dimensional Array, Four-Dimensional Array where all array accept from user And Display on screen  */

#include<stdio.h>
#include<stdlib.h>

void OneDimensional()
{
	int *arr=NULL;
	
	int n;
	
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	if(n<=0)
	{
		printf("Invalid Elements\n");
		return;
	}
	
	arr = (int *)malloc(n* sizeof(int));
	
	for(int i=0;i<n;i++)
	{
		printf("Enter %d element",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\nData is:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	free(arr);
}
	
////////////////////////////////////////////////////////// Two-Dimensional Array /////////////////////////////////////////////////////////////

void TwoDimensional()
{
	int **arr=NULL;
	int iRow=0,iCol=0;
	
	printf("Enter number of rows: ");
	scanf("%d",&iRow);
	
	printf("Enter number of Columns: ");
	scanf("%d",&iCol);
	
	if(iRow<=0 || iCol<=0)
	{
		printf("Invalid rows and columns\n");
		return;
	}
	
	arr = (int **)malloc(iRow*sizeof(int *));
	
	for(int i=0;i<iRow;i++)
	{
		arr[i] = (int*)malloc(iCol*sizeof(int));
	}
	
	printf("\n---------------Enter the data\n");
	for(int i=0;i<iRow;i++)
	{
		for(int j=0;j<iCol;j++)
		{
			printf("Enter %d row %d column element: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n---------------Data is:\n");
	for(int i=0;i<iRow;i++)
	{
		for(int j=0;j<iCol;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<iRow;i++)
	{
		free(arr[i]);
	}
	
	free(arr);
}

////////////////////////////////////////////////////////// Three-Dimensional Array /////////////////////////////////////////////////////////////

void ThreeDimensional()
{
	int first=0,second=0,third=0;
	int ***arr=NULL;
	
	printf("\n---------------------Three Dimension array-----------------\n");
	
	printf("Enter first: ");
	scanf("%d",&first);
	
	printf("Enter Second: ");
	scanf("%d",&second);
	
	printf("Enter Third: ");
	scanf("%d",&third);
	
		
	if(first<=0 || second<=0 || third<=0 )
	{
		printf("Invalid number of elements entered\n");
		return;
	}

	arr = (int ***)malloc(first*sizeof(int **));
	
	for(int i=0;i<first;i++)
	{
		arr[i] = (int **)malloc(second*sizeof(int **));
	}
	
	for(int i=0;i<first;i++)
	{
		for(int j=0;j<second;j++)
		{
			arr[i][j] = (int*)malloc(third*sizeof(int));
		}
	}
	
	printf("\n---Enter the data: \n");
	for(int i=0;i<first;i++)
	{
		for(int j=0;j<second;j++)
		{
			for(int k=0;k<third;k++)
			{
				printf("Enter %d of %d of %d element: ",i+1,j+1,k+1);
				scanf("%d",&arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	printf("\n---Data is:\n\n");
	printf("#####################\n");
	for(int i=0;i<first;i++)
	{
		for(int j=0;j<second;j++)
		{
			for(int k=0;k<third;k++)
			{
				printf("%d\t",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("#####################\n");
	}
	
	
	for(int i=0;i<first;i++)
	{
		for(int j=0;j<second;j++)
		{
			free(arr[i][j]);
		}
	}
	
	for(int i=0;i<first;i++)
	{
		free(arr[i]);
	}
	
	free(arr);
	
}

////////////////////////////////////////////////////////// Four-Dimensional Array /////////////////////////////////////////////////////////////

void FourDimensional()
{

	int first=0,second=0,third=0,fourth=0;
	int ****arr=NULL;
	
	printf("\n------------------Four Dimensional Array------------------\n");
	
	printf("Enter first: ");
	scanf("%d",&first);
	
	printf("Enter Second: ");
	scanf("%d",&second);
	
	printf("Enter Third: ");
	scanf("%d",&third);
	
	printf("Enter Fourth: ");
	scanf("%d",&fourth);
	
	if(first<=0 || second<=0 || third<=0 || fourth<=0 )
	{
		printf("Invalid number of elements entered\n");
		return;
	}
	
	arr = (int****)malloc(first*sizeof(int***));
	
	for(int i=0;i<first;i++)
	{
		arr[i] = (int ***)malloc(second*sizeof(int **));
		for(int j=0;j<second;j++)
		{
			arr[i][j] = (int **)malloc(third*sizeof(int *)); 
			for(int k=0;k<third;k++)
			{
				arr[i][j][k]= (int *)malloc(fourth*sizeof(int));
			}
		}
	}

	printf("\n---Enter the data:\n");
	for(int i=0;i<first;i++)
	{
		for(int j=0;j<second;j++)
		{
			for(int k=0;k<third;k++)
			{
				for(int l=0;l<fourth;l++)
				{
				printf("Enter %d of %d of %d of %d element: ",i+1,j+1,k+1,l+1);
				scanf("%d",&arr[i][j][k][l]);
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	
	printf("\n---Data is:\n");
	printf("\n################################\n");
	for(int i=0;i<first;i++)
	{
		for(int j=0;j<second;j++)
		{
			for(int k=0;k<third;k++)
			{
				for(int l=0;l<fourth;l++)
				{
				printf("%d\t",arr[i][j][k][l]);
				}
				printf("\n---------------------------------\n");
			}
			printf("\n################################\n");
		}
	}
	
	for(int i=0;i<first;i++)
	{
		for(int j=0;j<second;j++)
		{
			for(int k=0;k<third;k++)
			{
				free(arr[i][j][k]);
			}
			free(arr[i][j]);
		}
		free(arr[i]);
	}
	
	free(arr);

}

////////////////////////////////////////////////////////// Main Function /////////////////////////////////////////////////////////////

int main()
{
	int choice=0;
	printf("\n1.One Dimensional Array\n2.Two Dimensional Array\n3.Three Dimensional Array\n4.Four Dimensional Array");
	printf("\nEnter ur choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			OneDimensional();
			break;
			
		case 2:
			TwoDimensional();
			break;
			
		case 3:
			ThreeDimensional();
			break;
			
		case 4:
			FourDimensional();
			break;
			
		default:
			printf("Wrong Choice\n");
			break;
	}
	
return 0;

}
