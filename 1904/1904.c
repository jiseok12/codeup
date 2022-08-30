#include<stdio.h>

int a;

void sum(int i){
	if(i==a-1) return;
	sum(i-1);
	if(i%2 != 0) printf("%d ",i);
}

int main(){
    int b;
	scanf("%d %d",&a,&b);
	sum(b);
	return 0;
}
