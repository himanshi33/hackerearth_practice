#include<stdio.h>
int main()
{
	int n,i=10,sum=0;
	scanf("%d",&n);
	    while(n!=0){
	    sum+=((n%10)*i--);
		n/=10;
		}
		if(sum%11==0)
        printf("Legal ISBN");
		else
        printf("Illegal ISBN");
		return 0;
        }
