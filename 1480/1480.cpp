#include<stdio.h>

int main(){
    int a,b,c,arr[100][100]={0,};
    int n,m,count=1;
    
    scanf("%d %d",&n,&m);
    
    for(a=m+n-2;a<m+n-1;a++){
        for(b=m-1;b>=0;b--){
            for(c=0;c<n;c++){
                if(c+b==a)
                {
                    arr[c][b]=count++;
                    break;
                }
            }
        }
    }
    
    for(b=0;b<n;b++){
        for(c=0;c<m;c++){
            printf("%d ",arr[b][c]);
        }
        printf("\n");
    }
}
