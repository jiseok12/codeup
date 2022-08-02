#include<stdio.h>

int main(){
	int a[101][101]={0,};
	int b[101][101]={0,};
	int n,m;

	scanf("%d %d",&n,&m);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			b[i][j]=b[i-1][j]-b[i-1][j-1]+b[i][j-1]+a[i][j];
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
