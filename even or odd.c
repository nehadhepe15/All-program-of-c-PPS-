/*
  Name - Neha Narayan Dhepe
  Branch - VLSI
  Batch - B
  PRN NO - 2503033111378UD007
  Date - 23/04/2026
*/
#include<stdio.h>
int main()
{
	int num,rem;
		
	printf("Enter the Number : ");
	scanf("%d",&num);

	rem=num%2;
	
    if(rem==0)
	{
		printf("\nEntered Number is 'EVEN NUMBER'");
	}
	else
	{
		printf("\nEntered Number is 'ODD NUMBER'");
	}
	return 0;
}
