#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,tm,tmm,k,j,p;
	int sh,sm,eh,em;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
    scanf("%d %d %d %d",&sh,&sm,&eh,&em);
    tm=sh*60+sm;
	tmm=eh*60+em;
	k=tmm-tm;
	if(k<=59)
        printf("%d %d\n",0,k);
    else{
            p=k%60;
	j=k/60;
            printf("%d %d\n",j,p);
    }

}
}
