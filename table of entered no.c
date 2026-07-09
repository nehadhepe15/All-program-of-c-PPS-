/*
  Name - Neha Narayan Dhepe
  Branch - VLSI
  Batch - B
  PRN NO - 2503033111378UD007
  Date - 30/04/2026
  */
#include<stdio.h>
int main ()
{
	int i,t,num;
	
	printf("Entered the Number : ");
	scanf("%d",&num);
	
	for(i=1;i<11;i++)
	{
		t=num*i;
		printf("\n%d ",t);
	}
	return 0;
}
