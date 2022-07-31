#include<stdio.h>

int main(){
	int a,b;
	int count=1;
	int sam=1;
	int num[100]={0,};
	int score[100]={0,};
	
	scanf("%d %d",&a,&b);
	
	for(int i=1;i<=a;i++){
		scanf("%d",&num[i]);
	}
	
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			if(num[i]>num[j]){
				count++;	
			}
		}
		score[count]=num[i];
		count=1;
	}
	
	for(int i=1;i<=a;i++){
		if(score[i]==0){
			score[i]=score[i-1];
		}
		printf("%d ",score[i]);
		if(i%b==0) printf("\n");
	}
	return 0;
}
