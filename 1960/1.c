#include<stdio.h>
int memo[10000001]={1,2,4};

int main(){
    int a;
    scanf("%d",&a);
    for(int i=3;i<=a;i++){
        memo[i]=(memo[i-1]+i)%137;
    }
    printf("%d",memo[a]);
    return 0;
}
 //1  2  3  4  5  6  7
 //2  4  7 11 16 22 29

 //1  4  9 16 25 36  49
