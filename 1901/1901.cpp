#include<stdio.h>

void sum(int b){
	if(0==b) return;
	sum(b-1);
	printf("%d\n",b);
}

int main(){
	int a;
	scanf("%d",&a);
	sum(a);
	return 0;
}
