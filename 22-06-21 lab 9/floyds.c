#include<stdio.h>
int c[10][10],d[10][10],i,j,k,n;
int min(int A,int B)
{
	if(A<=B)
	return A;
	else
	return B;
}

void floyds()
{
for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			d[i][j]=c[i][j];
		}
	}
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
			d[i][j]=min(d[i][j],d[i][k]+d[k][j]);	
			}
		}
	}



}


void main()
{
	printf("Enter the number of verticies\n");
	scanf("%d",&n);
	printf("Enter  the cost adjacency matrix\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
	floyds();
	printf("distance matrix is\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",d[i][j]);
		}
		printf("\n");
	}
}
