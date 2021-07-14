#include<stdio.h>
int main()
{
	int matrix[3][3],i,j;
	printf("elements in the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element[%d][%d]:",i,j);
			scanf("%d",&matrix[i][j]);
			
		}
		
	}
	
	printf("\nThe matrix is :\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",matrix[i][j]);
	}
	printf("\n\n");
	
}
	
