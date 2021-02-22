#include<stdio.h>
int main()
{
	int n,x;
	scanf("%d",&n);
	x=n/5;
	if(n%5!=0){
    printf("%d",x+1);
    }
    else{
    printf("%d",x);
    }


}
