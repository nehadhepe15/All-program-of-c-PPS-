/*
  Name - Neha Narayan Dhepe
  Branch - VLSI
  Batch - B
  PRN NO - 2503033111378UD007
  Date - 30/04/2026
  */
#include<stdio.h>
int main()
{
	int i,num,fact=1;
	 
	 printf("Enter the number : ");
	 scanf("%d",&num);
	 
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
    }
	printf("\n factorial of %d is %d",num,fact);
	return 0;
}
