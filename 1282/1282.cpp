#include<stdio.h>

int main(){
	int a;
	int sum=0;
	int sum2=0;
	scanf("%d",&a);
	
	for(int i=1;i*i<=a;i++){
		sum=a-i*i;
		sum2=i;
	}
	printf("%d %d",sum,sum2);
	return 0;
}
