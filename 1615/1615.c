#include <stdio.h>

int num[10000];

int SelfNumCheck(int n)
{
    int sum = n;
    while(n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int a,b;
    int sum=0;
    scanf("%d %d",&a,&b);
    for(int i = 0; i < 10000; i++)
    {
        int idx = SelfNumCheck(i);
        num[idx] = 1;
    }
    for(int i = a; i <= b; i++){
        if(!num[i]) sum += i;
    }
    printf("%d",sum);
    return 0;
}
