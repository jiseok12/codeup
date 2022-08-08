#include<stdio.h>

int main(){
	int a[1001],b,count=0,c,i;
	scanf("%d",&b);
	
	for(int i=1;i<=b;i++){
		scanf("%d", &a[i]);
	}
	
	for(i=1;i<=b;i++){
		for(int j=2;j<=b;j++){
			if(a[j-1]>a[j]){
				c=a[j];
				a[j]=a[j-1];
				a[j-1]=c;
				count++;
			}
		}
		if(count==0)
			break;
		else
			count=0;
	}
	printf("%d",i-1);
	return 0;
}
