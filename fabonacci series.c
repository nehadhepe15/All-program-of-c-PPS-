#include<stdio.h>
int main ()
{
	int i,pren=1,curn=0,nexn;
	
	printf("Fabonacci series : ");
	
	for(i=1;i<11;i++)
	{
		nexn=pren+curn;
		
		pren=curn;
		curn=nexn;
		
		printf("%d ",nexn);
	}
	return 0;
}
