/*
  Name - Neha Narayan Dhepe
  Branch - VLSI
  Batch - B 
  PRN NO - 2503033111378UDOO7
  Date - 09/04/2026
*/
#include<stdio.h>
int main()
{
	float len,wid,area,peri;
	
	printf("Enter the length of the rectangle  :  ");
	scanf("%f",&len);

	printf("Enter the  width of the rectangle  :  ");
	scanf("%f",&wid);
	
	area=len*wid;
	printf("\n\n Area of the rectangle is %f",area);
	
	peri=2*(len+wid);
	printf("\n\n Perimeter of the rectangle is %f",peri);
	
	return 0;
}
