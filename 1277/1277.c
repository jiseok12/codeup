#include<stdio.h>

int main(){
	int a;
	int c;
	scanf("%d",&a);
	if(a==1) scanf("%d", &c); printf("%d %d %d",c,c,c);
	else if(a%2==0){
		for(int b=1;b<=a;b++){
			scanf("%d",&c);
			if(b==1) printf("%d ",c);
			else if(b==a) printf("%d",c);
			else if(a/2==b) printf("%d",c);
		}
	}
	else{
		for(int b=1;b<=a;b++){
			scanf("%d",&c);
			if(b==1) printf("%d ",c);
			else if(b==a) printf("%d",c);
			else if((a/2)+1==b) printf("%d",c);
		}
	}
	
	
	return 0;
}
