#include<stdio.h>
int main()
{
	int n,t;
	int firstcost,secondcost;
	scanf("%d",&t);
	
	for(int k=1;k<=t;k++)
	{
		scanf("%d%d",&firstcost,&secondcost);
		scanf("%d",&n);
		int arr[n][2];
		int firstcount=0,secondcount=0,res;
	for(int i=0;i<n;i++)
	{
     for(int j=0;j<2;j++)
	 {
		 scanf("%d",&arr[i][j]);	

	}
	}
	for(int i=0;i<n;i++)
{
	if(arr[i][0]==1)
	firstcount++;
	if(arr[i][1]==1)
	secondcount++;
}
        if(firstcount>secondcount)
		{
          if(firstcost>secondcost)
		  res=secondcount*firstcost+firstcount*secondcost;
		  else
		  res=secondcount*secondcost+firstcount*firstcost;
		}
		else{
			if(firstcost>secondcost)
			res=secondcount*secondcost+firstcount*firstcost;
			else
			res=secondcount*firstcost+firstcount*secondcost;
		}		
		printf("%d\n",res);
	}
	}
	
