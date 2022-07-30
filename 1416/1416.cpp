#include<stdio.h>
 
 
int main(){
    
    int a,b;
    int count=0;
    int sum[1000]={0,};
	scanf("%d",&a);
    b=a;
   for(int i=0;;i++){
   		count++;
		sum[i]=b%2;
		if(b==0||b==1) break;
   		b=b/2;
   }
   for(int i=count-1;i>=0;i--){
   		printf("%d",sum[i]);
   }
    return 0;
}
