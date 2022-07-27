#include<stdio.h>

int main(){
	int a,b,c;
	float sum=0;
	scanf("%d %d",&a,&b);
	sum=a;
	for(int i=1;i<=b;i++){
		scanf("%d",&c);
		sum=sum+sum*(c/100.0);
	}
	printf("%.0f\n",sum-a);
	printf(sum-a<0?"bad":sum-a==0?"same":"good");
	return 0;
}
