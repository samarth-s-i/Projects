/* C Programming Project on Unit Converter.
   Program Authors: Anand Kanavalli, Brunda Kubsad, Manasa Palled & Samarth Itagi.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"measure.h"
#include"currency.h"
void main()
{
	int ch,x=1,i;
	printf("THANK YOU FOR CHOOSING OUR APPLICATION!\n");
	for(i=0;i<38;i++)printf("-");
	printf("\n\n");
	printf("Loading the resources for you!\n\n\nSTAUS-\n\n");
	for(i=0;i<49;i++)printf("..");
	printf("100\n........10"); sleep(1); printf("........20"); sleep(1); printf("........30");
	for(i=31;i<=100;i++)
	{
		if(i%10==0)
		 printf("\b\b.%d",i);
		else
		 printf(".");
	}
	sleep(1);
	menu:system("cls");
		printf("-----------------UNIT CONVERTER------------------\n\n");
   		printf("\n\nTELL ME WHAT AM I SUPPOSE TO DO?!\n\n");
		printf("1 For measurement conversion\t2 For currency exchange\t\t3. Exit\n");
		printf("\nYOUR OPTION IS: ");
		scanf("%d",&ch);
		 while(x)
		 {
		 	switch(ch)
		 	{
		 		case 1: sub_menu0:system("cls");
				 		printf("\n\nTELL ME WHAT AM I SUPPOSE TO DO?!\n\n");
						printf("1. Length\t\t2. Mass\t\t3. Data\t\t4. Time\n5. Temperature\t\t6. BMI\t\t7. Discount\n8. Back\t\t\t9. Exit\n");
						printf("\nYOUR OPTION IS: ");
						scanf("%d",&ch);
						
						 switch(ch)
						 {
						 	case 1: system("cls");
									sub_menu1:printf("\n\n\nTELL ME WHAT AM I SUPPOSE TO DO?!\n\n");
									printf("1. Foot to cm\t2. cm to Foot\t3. Back\t\t4. Main menu\n");
									printf("\nYOUR OPTION IS: ");
									scanf("%d",&ch);
									  switch(ch)
						 			  { 
										case 1:  ft_to_cm();
												 goto sub_menu1;
												 break;
										case 2:  cm_to_ft();
												 goto sub_menu1;
												 break;
										case 3:  goto sub_menu0;
												 break;
										case 4:  printf("\n\nNavigating to main menu!....");
												 sleep(1);
												 goto menu;
												 break;
										default: printf("!!! INVALID CHOICE !!!");
												 goto sub_menu1;
												 break;
						 			  }
						 			break;
						 	case 2: system("cls");
							 		sub_menu2:printf("\n\nTELL ME WHAT AM I SUPPOSE TO DO?!\n\n");
									printf("1. Kg to Ton\t2. Ton to Kg\t3. Back\t\t4. Main menu\n");
									printf("\nYOUR OPTION IS: ");
									scanf("%d",&ch);
									 switch(ch)
						 			 {
										case 1:  kg_to_ton();
												 goto sub_menu2;
												 break;
										case 2:  ton_to_kg();
												 goto sub_menu2;
												 break;
										case 3:  goto sub_menu0;
												 break;
										case 4:  printf("\n\nNavigating to main menu!....");
												 sleep(1);
												 goto menu;
												 break;
										default: printf("\n\n!!! Please enter a valid choice !!!\n\n");
												 goto sub_menu2;
												 break;
						 			 }
						 			break;
						 	case 3: system("cls");
							 		sub_menu3:printf("\n\nTELL ME WHAT AM I SUPPOSE TO DO?!\n\n");
									printf("1. Mb to Kb\t2. Kb to Mb\t3. Back\t\t4. Main menu\n");
									printf("\nYOUR OPTION IS: ");
									scanf("%d",&ch);
									 switch(ch)
						 			{
										case 1:  data_mb_to_kb();
												 goto sub_menu3;
												 break;
										case 2:  data_kb_to_mb();
												 goto sub_menu3;
												 break;
										case 3:  goto sub_menu0;
												 break;
										case 4:  printf("\n\nNavigating to main menu!....");
												 sleep(1);
												 goto menu;
												 break;
										default: printf("\n\n!!! Please enter a valid choice !!!\n\n");
												 goto sub_menu3;
												 break;
						 			}
						 			break;
						 	case 4: system("cls");
							 		sub_menu4:printf("\n\nTELL ME WHAT AM I SUPPOSE TO DO?!\n\n");
									printf("1. 24 hour format time\t\t2. Hour(s) to minute(s)\t\t3. Minute(s) to hour(s)\n4. Back\t\t\t\t5. Main menu\n");
									printf("\nYOUR OPTION IS: ");
									scanf("%d",&ch);
									 switch(ch)
						 			{
										case 1:  time_24();
												 goto sub_menu4;
												 break;
										case 2:  time_hr_min();
												 goto sub_menu4;
												 break;
										case 3:  time_min_hr();
												 goto sub_menu4;
												 break;
										case 4:  goto sub_menu0;
												 break;
										case 5:  printf("\n\nNavigating to main menu!....");
												 sleep(1);
												 goto menu;
												 break;
										default: printf("\n\n!!! Please enter a valid choice !!!\n\n");
												 goto sub_menu4;
												 break;
						 			}
						 			break;
						 	case 5: system("cls");
							 		sub_menu5:printf("\n\nTELL ME WHAT AM I SUPPOSE TO DO?!\n\n");
									printf("1. Fahrenheit to Celsius\t2. Celsius to Fahrenheit\t3. Back\t\t4. Main menu\n");
									printf("\nYOUR OPTION IS: ");
									scanf("%d",&ch);
									 switch(ch)
						 			{
										case 1:  temp_fah_to_cel();
												 goto sub_menu5;
												 break;
										case 2:  temp_cel_to_fah();
												 goto sub_menu5;
												 break;
										case 3:  goto sub_menu0;
												 break;
										case 4:  printf("\n\nNavigating to main menu!....");
												 sleep(1);
												 goto menu;
												 break;
										default: printf("\n\n!!! Please enter a valid choice !!!\n\n");
												 goto sub_menu5;
												 break;
						 			}
						 			break;
						 	case 6: system("cls");
							 		sub_menu6:printf("\n\nTELL ME WHAT AM I SUPPOSE TO DO?!\n\n");
									printf("1. BMI Calculator\t2. Back\t\t3. Main menu\n");
									printf("\nYOUR OPTION IS: ");
									scanf("%d",&ch);
									 switch(ch)
						 			{
										case 1:  bmi();
												 goto sub_menu6;
												 break;
										case 2:  goto sub_menu0;
												 break;
										case 3:  printf("\n\nNavigating to main menu!....");
												 sleep(1);
												 goto menu;
												 break;
										default: printf("\n\n!!! Please enter a valid choice !!!\n\n");
												 goto sub_menu6;
												 break;
						 			}
						 			break;
						 	case 7: system("cls");
							 		sub_menu7:printf("\n\nTELL ME WHAT AM I SUPPOSE TO DO?!\n\n");
									printf("1. Discount Calculator\t\t2. Back\t\t3. Main menu\n");
									printf("\nYOUR OPTION IS: ");
									scanf("%d",&ch);
									 switch(ch)
						 			{
										case 1:  discount();
												 goto sub_menu7;
												 break;
										case 2:  goto sub_menu0;
												 break;
										case 3:  printf("\n\nNavigating to main menu!....");
												 sleep(1);
												 goto menu;
												 break;
										default: printf("\n\n!!! Please enter a valid choice !!!\n\n");
												 goto sub_menu7;
												 break;
						 			}
						 			break;
						 	case 8: printf("\n\nNavigating back!....");
						 			sleep(1);
						 			goto menu;
						 			break;
						 	case 9: goto end;
						 			break;
			 			 }
			 			break;
			 	case 2: system("cls");
				 		sub_menu_1:printf("\nTELL ME HOW CAN I HELP YOU IN CURRENCY EXCHANGE?!\n\n");
						printf("1. Dollar(s) and Rupee(s)\t2. Euro(s) and Rupee(s)\t\t3. Back\t\t4. Exit\n");
						printf("\nYOUR OPTION IS: ");
						scanf("%d",&ch);
						 switch(ch)
						 {
						 	case 1:  system("cls");
									 dollar_rupee();
									 goto sub_menu_1;
									 break;
							case 2:  system("cls");
									 euro_rupee();
									 goto sub_menu_1;
									 break;
							case 3:  printf("\n\nNavigating to main menu!....");
								     sleep(1);
									 goto menu;
									 break;
							case 4:  goto end;
									 break;
							default: printf("\n\n!!! Please enter a valid choice !!!\n\n");
									 goto sub_menu_1;
									 break;
						 }
						break;
			 	case 3:  end:printf("Exiting");
						 sleep(1);printf(".");sleep(1);printf(".");sleep(1);printf(".");
			 			 x=0;
			 			 break;
				default: printf("\n\n!!! Please enter a valid choice !!!\n\n");
						 sleep(2);
						 goto menu;
						 break;
		 	}
	}
}
