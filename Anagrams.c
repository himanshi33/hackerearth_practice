#include<stdio.h>
#include<string.h>
void main()
{
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++)
    {
        int i,j,count=0;
	char a[10000],b[10000];
	scanf("%s%s",&a,&b);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0';j++)
		{
		if(a[i]==b[j]){
		count++;
        b[j]='.';
		break;
		}
	}
	}
	printf("%d\n",(strlen(a)+strlen(b)-2*count));
}
}


