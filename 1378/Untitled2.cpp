#include<stdio.h>

int main(){
	int a;
	int sum=0;
	int sum2=0;
	
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		sum=sum+i;
		sum2=sum2+sum;
	}
	printf("%d",sum2);
	
	return 0;
}
