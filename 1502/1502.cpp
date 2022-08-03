#include<stdio.h>

int main(){
	int a[51][51]={0,};
	int count=1,b;
	
	scanf("%d",&b);
	
	for(int i=1; i<=b; i++){
		for(int j=1;j<=b;j++){
			a[j][i]=count++;
		}
	}
	
	for(int i=1;i<=b;i++){
		for(int j=1;j<=b;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
