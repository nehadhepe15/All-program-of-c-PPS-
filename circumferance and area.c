/*
  Name - Neha Narayan Dhepe
  Branch - VLSI
  Batch - B
  PRN NO - 2503033111378UD007
  Date - 09/04/2026
  */
#include<stdio.h>
int main ()
{
	float dia,r,area,cir;
	
	printf(" Enter the value of diameter of the circle : ");
	scanf("%f",&dia);
	
	r=dia/2;
	
	area=3.14*r*r;
	cir=2*3.14*r;
	
	printf("\n\n Area of circle with diameter %f will be %f ",dia,area);
	printf("\n\n Circumferance of circle with diameter %f will be %f ",dia,cir);
	
	return 0;
}
