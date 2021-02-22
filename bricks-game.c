#include<stdio.h>
int main()
{
	int N,i,j,sum=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		sum=sum+i;
	
		if(sum>=N){
		printf("Patlu");
            break;
		}
	j=2*i;
    sum=sum+j;
		if(sum>=N){
		printf("Motu");
break;}
}
}
