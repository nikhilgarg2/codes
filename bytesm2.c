#include<stdio.h>
int max(int a,int b)
{
	if(a>=b)
		return a;

	else
		return b;


}

int array[101][101];

int main()
{
	int t;
	int a,b;
	int max1=0;
	scanf("%d",&t);
	int i,j;
	while(t--)
	{
		scanf("%d%d",&a,&b);
		max1=0;
		for(i=1;i<=a;i++)
		{
			for(j=1;j<=b;j++)
			{
				scanf("%d",&array[i][j]);
			}
		}

		for(i=a-1;i>=1;i--)
		{
			for(j=1;j<=b;j++)
			{
				if(j==1)
					array[i][j]+=max(array[i+1][j],array[i+1][j+1]);
				else if(j==b)
					array[i][j]+=max(array[i+1][j],array[i+1][j-1]);
				else		
					array[i][j]+=max(array[i+1][j],max(array[i+1][j+1],array[i+1][j-1]));
			//printf("%d ",array[i][j]);
			}

			//printf("\n");
		}
		for(i=1;i<=b;i++)
			max1=max(max1,array[1][i]);

		printf("%d\n",max1);
	}

	return 0;
}
