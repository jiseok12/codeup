#include<stdio.h>

int a;

void sum(int b){
	if(a+1==b) return;
	sum(b+1);
	printf("%d\n",b);
}

int main(){
	scanf("%d",&a);
	sum(1);
	return 0;
}
