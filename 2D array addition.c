// NAME -Neha N. Dhepe.
// PRN - 2503033111378UD007

#include<stdio.h>
int main()
{
	int i,j;
	int a[3][3]={0,1,2,3,4,5,6,7,8};
	int b[3][3]={8,7,6,5,4,3,2,1,0};
	int c[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	
		c[i][j]=a[i][j]+b[i][j];
    
		printf("%d\t",c[i][j]);
		}
		printf("\n");
    }
    
	return 0;
}
