#include<stdio.h>
int main()
	{

char s[200];
int xc=0,i;
int yc=0;
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
 {
     if(s[i]=='L')
	    xc=xc-1;
     else if(s[i]=='R')
	    xc=xc+1;
     else if(s[i]=='U')
		yc=yc+1;
     else if(s[i]=='D')
		yc=yc-1;

 }
printf("%d %d",xc,yc);
	 
	}

