#include<stdio.h>
#include <string.h>

int main(){
	char S1[20]="";
	char S2[20]="";
	char S3[20]="";
	
	scanf("%s %s %s",S1,S2,S3);
	
	if(S1[(int)strlen(S1)-1]==S2[0] && S2[(int)strlen(S2)-1]==S3[0]&&S3[(int)strlen(S3)-1]==S1[0])
		printf("good");
	else
		printf("bad");
	
	return 0;
}
