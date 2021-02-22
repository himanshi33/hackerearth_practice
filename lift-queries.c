#include <stdio.h>
int main()
{
	long int T,k;
	float mid;
	scanf("%ld",&T);
	int A,B;
	A=0;
	B=7;
	if(1<=T && T<=100000)
	{
		for(k=1;k<=T;k++)
		{
			mid=(A+B)/2;
			long int N;
			scanf("%ld\n",&N);			
			if(N<=mid)
			{
				printf("A\n");
				A=N;
			}
			else if(N>mid) 
			{
				printf("B\n");
				B=N;
			}
		}
 
	}
	return 0;
}
 
 
	
 
