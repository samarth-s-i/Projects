/* 
	Currency exchange Header file.
	Authors: Anand Kanavalli, Brunda Kubsad, Manasa Palled & Samarth Itagi.
*/

#include<stdio.h>


//Function to exchange dollar and rupee.
void dollar_rupee()
{
	float r,d,t,code;
	dr:printf("\n\nCurrency exchange-\n\n1. Rupees to Dollars\t2. Dollars to Rupees\t3. Back\nEnter your Choice: ");
	scanf("%f",&code);
	if(code==1)
	{
	printf("\n\nEnter your amount: ");
	scanf("%f",&r);
	d=r/(72.86);
	printf("\n\nYou have %.2f Dollars\n",d);
	}
	else if (code==2)
	{
	printf("\n\nEnter your amount: ");
	scanf("%f",&d);
	r=d*(72.86);
	printf("\n\nYou have %.2f Rupees\n",r);
	}
	else if(code==3)
	 return;
	else
	printf("\nSorry, Invalid code......\n");goto dr;
}



//Function to exchange euro and rupee.
void euro_rupee()
{
	float r,d,t,code;
	er:printf("Currency exchange-\n1. Rupees to Euros\t2. Euros to Rupees\t3. Back\nEnter your Choice: ");
	scanf("%f",&code);
	if(code==1)
	{
	printf("\n\nEnter your amount: ");
	scanf("%f",&r);
	d=r/(85);
	printf("\nYou have %.2f Euros\n",d);
	}
	else if (code==2)
	{
	printf("\n\nEnter your amount: ");
	scanf("%f",&d);
	r=d*(85);
	printf("\n\nYou have %.2f Rupees\n",r);
	}
	else if(code==3)
	 return;
	else
	printf("\nSorry, Invalid code......\n");goto er;
}
