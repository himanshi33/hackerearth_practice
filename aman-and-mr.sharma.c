#include<stdio.h>
int main()
{
	long int n;
	long int count=0;
	scanf("%ld",&n);
	while(n--){
		long int r,x;
		scanf("%ld %ld",&r,&x);
		double perimeter=(2*22*r)/7;
		long int run = x*100;
		if(run>=perimeter)
		count++;}
	printf("%d",count);
	}
