#include<stdio.h>

int main(){
	int a,b;
	int sum2[100]={0,};
	int s,e,u;
	
	scanf("%d %d",&a,&b);
	
	for(int i=1;i<=b;i++){
		scanf("%d %d %d",&s,&e,&u);
		sum2[s]=sum2[s]+u;
		sum2[e+1]=sum2[e+1]-u;
	}
	
	for(int i=1;i<=a;i++)
		printf("%d ",sum2[i]);
		
	printf("\n");
	
	for(int i=1;i<=a;i++){
		sum2[i]=sum2[i-1]+sum2[i];
		printf("%d ",sum2[i]);
	}
	return 0;	
}
