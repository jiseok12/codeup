#include<stdio.h>

int main(){
	int a[7]={0,};
	int sum=0;
	int count=0;
	int qhsj=0;
	for(int j=0;j<=6;j++)
		scanf("%d",&a[j]);
	
	for(int j=0;j<6;j++){
		scanf("%d", &sum);
		for(int i=0;i<6;i++){
			if(sum==a[i])
				count++;
		}
		if(sum==a[6]) qhsj=1;
	}
	
	if(count==6) printf("1");
	else if(count==5&&qhsj==1)printf("2");
	else if(count==5)printf("3");
	else if(count==4)printf("4");
	else if(count==3)printf("5");
	else printf("0");
}
