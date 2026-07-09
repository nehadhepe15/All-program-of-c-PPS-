// NAME -Neha N. Dhepe.
// PRN - 2503033111378UD007

#include<stdio.h>
int main()
{
	int a[4]={1,2,4,8}, b[4]={0,1,3,6};
	int c[4],i;
	
	printf("c[4]={");
	
	for(i=0;i<4;i++)
	{
		c[i]=a[i]+b[i];
    
		printf("%d,",c[i]);
    }
    printf("}");
    
	return 0;
}
