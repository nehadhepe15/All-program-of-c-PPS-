/*Name - Neha N. Dhepe
  PRN No - 2503033111378UD007
  Branch - VlSI
  Batch - B
  Date - 07/05/2026
*/
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++) //j=3 bcoz we want 3 * in 1st row and j-- bcoz 2* in 2nd row
		{
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
