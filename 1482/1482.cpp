# include <stdio.h>

int main()
{
	int i,j,n,m,k;
	int arr[100][100];
	int cnt = 1;
	scanf("%d %d",&n,&m);
	for(i = n+m-2; i>=0; i--)
	{
		for(j = n-1; j>=0; j--)
		{
			for(k = m-1; k>=0; k--)
			{
				if(j+(m-1-k) == i)
				{
					arr[j][k] = cnt++;
				}
			}
		}
	}
	
	
	for(i = 0; i<n; i++)
	{
		for(j = 0; j<m; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
