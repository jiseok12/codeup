/*#include<stdio.h>
int meno[100][100]={0,};
int f(int a, int b){
    if(a<b) return 0;
    if(a==b||b==0) return 1;
    if(b==1) return a;
    return f(a-1, b-1)+f(a-1,b);
}

int main(){
    int a,b;
    scanf("%d %d",&a, &b);
    printf("%d",f(a,b));
}
*/
#include<stdio.h>
int memo[100][100]={};
int f(int a, int b){
    if(a<b) return memo[a][b]=0;
    if(a==b||b==0) return memo[a][b]=1;
    if(b==1) return memo[a][b]=a;
    return memo[a][b]=f(a-1, b-1)+f(a-1,b);
}

int main(){
    int a,b;
    scanf("%d %d",&a, &b);
    for(int i=1;i<=a;i++){
        memo[i][0]=1;
        for(int y=1;i<=b;y++){
            memo[i][0]=1;

        }
    }
    printf("%d",memo[a][b]);
}
