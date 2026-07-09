/*
  Name - Neha Narayan Dhepe
  Branch - VLSI
  Batch - B
  PRN NO - 2503033111378UD007
  Date - 23/04/2026
  */
#include<stdio.h>
int main ()
{
	int s_pin ,u_pin;
	s_pin=2006;
	
	printf("Enter your PIN : ");
	scanf("%d",&u_pin);
	
	if(s_pin==u_pin)
	{
		printf("\n\nCORRECT PIN");
	}
	else
	{
		printf("\n\nINCORRECT PIN");
	}
	return 0;
}
