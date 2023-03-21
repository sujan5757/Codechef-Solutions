#include<stdio.h>

int main(void){
	

	
	float bal;
	int cash;
    char name[6];
	scanf("%d  %f", &cash, &bal);

	   if(cash % 5 == 0&& cash<=bal - 0.50)
	  { 	bal = bal - cash - 0.50;
	    printf("\n %.2f\n", bal );}
	   	else
	   	{
            printf(" %.2f\n", bal);
	   	}
	   
return 0;

}
