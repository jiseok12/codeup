#include<stdio.h>

int answer;
int sum(int b){
	if(0==b) return 1;
	sum(b-1);
	answer=answer+b;
	return answer;
}

int main(){
	int a;
	scanf("%d",&a);
	printf("%d",sum(a));
	return 0;
}
