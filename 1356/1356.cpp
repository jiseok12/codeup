#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		printf("*");
	}
	printf("\n");
	for(int j=3;j<=a;j++){
		for(int i=1;i<=a;i++){
			if(i==1||i==a) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	for(int i=1;i<=a;i++){
		printf("*");
	}
	return 0;
}
