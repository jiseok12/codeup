#include<stdio.h>

int main(){
	int a,b=1,c;
	scanf("%d",&a);
	c=a-2;
	for(int i=1;i<=a;i++){
		printf("*");
	}
	printf("\n");
	for(int i=1;i<=a-2;i++){
		printf("*");
		for(int j=1;j<=a-2;j++){
			if(j==b||j==c||(a-2)/2+1==j||(a-2)/2+1==i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		c--;
		b++;
		printf("*");
		printf("\n");
	}
	for(int i=1;i<=a;i++){
		printf("*");
	}
	return 0;
}

