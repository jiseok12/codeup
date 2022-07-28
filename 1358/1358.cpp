#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i=i+2){
		for(int j=1;j<=(a/2)-(i-1)/2;j++){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
