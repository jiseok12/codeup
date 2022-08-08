#include<stdio.h>

int main(){
	int a[500001]={0,};
	int b,c[500001]={0,};
	int d,count=1,e[50001];
	
	scanf("%d",&b);
	
	for(int i=1;i<=b;i++){
		scanf("%d",&d);
		a[d]=1;
		c[i]=d;
	}
	
	for(int i=1;i<=500000;i++){
		if(a[i]==1){
			e[count]=i;
			count++;
		}
	}
	
	for(int i=1;i<=b;i++){
		for(int j=1;j<=b;j++){
			if(c[i]==e[j]){
				printf("%d ", j);
				j=b;
			}
		}
	}
		

	return 0;
}
