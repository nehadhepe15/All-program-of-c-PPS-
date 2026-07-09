/*
  Name - Neha Narayan Dhepe
  Branch - VLSI
  Batch - B
  PRN NO - 2503033111378UD007
  Date - 09/04/2026
*/
#include<stdio.h>
int main()
{
	int num1,num2,add,sub,mul,div,mod;
	
	printf("Enter 1st number : ");
	scanf("%d",&num1);
	
	printf("Enter 2nd number : ");
	scanf("%d",&num2);

    add=num1+num2;
    printf("\n\n The addition of the numbers is %d",add);
    
    sub=num1-num2;
    printf("\n\n The substraction of the numbers is %d",sub);
    
    mul=num1*num2;
    printf("\n\n The multiplication of the numbers is %d",mul);
    
    div=num1/num2;
    printf("\n\n The division of the numbers is %d",div); 
    
    mod=num1%num2;
    printf("\n\n The modulus of the numbers is %d",mod);
       
    return 0;
}
