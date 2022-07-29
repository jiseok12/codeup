#include<stdio.h>

int main(){
	int a,b;
	
	scanf("%d %d",&a,&b);
	for(int y=1;y<=b;y++){
		for(int i=1;i<=a;i++){
			for(int j=1;j<=i-1;j++){
				printf(" ");
			}
			printf("*\n");
		}
		for(int i=a-1;i>0;i--){
			for(int j=1;j<=i-1;j++){
				printf(" ");
			}
			printf("*\n");
		}
	}
	return 0;
}
