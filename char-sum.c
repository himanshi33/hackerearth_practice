#include<stdio.h>
int main()
{
	char s[100];
	int sum=0,i;
	scanf("%s",&s);
    for(i=0;s[i]!='\0';i++){
		sum=sum +(s[i]-96);
    }

		printf("%d",sum);

}
