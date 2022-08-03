#include<stdio.h>

int main(){
	int a,count=1;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			printf("%d ",count++);
		}
		printf("\n");
	}
	return 0;
}
